

/*************************************************************************************************************************** 
  This file implements a template shared library that uses the 'UCF' framework
 
*/

TplModule 		        TheModule   ("This is the name that will be displayed to identify this module");

iUniConsole::Console    *TheShell   {nullptr};
iTestUtility      	    *TheTestExec{nullptr};
iStdIOChannelSystem     *TheSystem 	{nullptr};
/*  Required interfaces to external modules */

iSharedLibFramework<iIXmgr>* GetEntryPoint(iIXmgr *local_ix,unsigned module_id) {
/*  This code is required and not to be changed 
    1.	Export any interfaces that need to be visible to the UCF framework 
    */

    TheModule.ModuleId=module_id;
    TheModule.Cmds=local_ix->iGet<CmdRepository::iMethodServer>();

    return(&TheModule); 
}

int TplModule::Initialize(iSharedLibFramework<iIXmgr>::ModuleStates level,iIXmgr *global_ix) {
/*  Initialize the module(s)
	1.	use the interfaces previously registered by the framework and other modules
    2.	the 'ix' interface provided to this function is the global interface
    3.	any interfaces or commands registered here go into the global repository - and will remain after this module is unloaded - dont do it
    */

	using state=iSharedLibFramework<iIXmgr>::ModuleStates;

	try {
       	
		std::thread startup_thread;
		switch(level) {

			case(state::GetInterfaces):
			/* Get the interfaces previously registered by the framework and other modules */

                SetBaseInterfaces(global_ix,ModuleId);
                /*  Configure standard/required interfaces */

			    TheSystem=global_ix->iGet<iStdIOChannelSystem>(ModuleId, "Unable to find System interface");
			    TheTestExec=global_ix->iGet<iTestUtility> (ModuleId);
                /*  Get interfaces to the Standard IO Module and Test Executive */

			    break;

			case(state::StartModule):
			/* (2) Initializations and/or configurations
                1.  configure stdouts out/sys/trace
                2.  register keyboard commands
                3.  register test steps
                */

			    Start();
			    break;

			case(state::MakeExternalConnections):
			/*  (3) make any external connections 
                1.  make any required system connections here
                2.  finding connection errors here is faster than waiting through a long config process
                */
			    break;

			case(state::StartProcesses):
			/* (4) autostart any runtime processes */
			
			    SetStaticConfiguration();
                /* alternate location to 'make external connections' */
				
			    startup_thread=std::thread(&TplModule::ThreadedStartup,this,global_ix);
			    startup_thread.detach();
                /*  start lengthy external initializations or configurations here */
			    break;

			case(state::Activate):
			/*  (5) wake up an idle module 
                1. bring any external systems out of a sleep state as required
                */
			    break;

			case(state::SetToIdle):
			/* set the module and external systems to an idle state */
			    SetToIdle();
			    break;

			case(state::Shutdown):
			/*  shutdown the module / system on program termination
	            1.  Set any instrumentation to an idle/safe state
	            2.  Any de-allocations as necessary
	            */

			    Shutdown();
			    break;

			default:
			    break;
		}
	}
    catch(IOString msg) {

        StdTraceConsole.Write(msg, iStdOut::Error);
        HandleModuleException("Initialization");
    }

    catch(...) {

        StdTraceConsole.Write("<xxx> Module loaded with errors", iStdOut::Error);
        HandleModuleException("Initialization");
	}

	return(1);
}

const char* TplModule::GetDescription() {
/*  return a module description and build date to the framework */

    static IOString desc("This module implements a generic UniConsole module.\nV100122\nBuild date = ");
	desc+=__DATE__;

    return(desc);
}

void TplModule::ThreadedStartup(iIXmgr *ix) {
/*  Perform any system initializations or configurations on startup that are lengthy and might tie up the main thread of execution 
    1.  **ALL** exceptions that are thrown in this thread **MUST** be caught in this thread
    */

    try {

        TheAppEngine->IncrementActiveThreadCount();
        /* let the appengine know that a thread is running (aka, keep the progress bar going */

        InitializeAndConfigureTheSystem(...);
        /*  An example call */

            TheAppEngine->iErrorManager()->SetHardError("Unable to initialize the system interface");
        }
    }
    catch(IOString msg) {

        TheAppEngine->iErrorManager()->SetHardError(msg);
    }
    catch(...) {

        TheAppEngine->iErrorManager()->SetHardError("Unknown exception while initializing the system");
    }

    TheAppEngine->DecrementActiveThreadCount();
}


using Ucfx=Aobj<TplModule,CmdParam>;
int TplModule::Start() {
/*  Initialize and configure this module
    1.  Register command line directives
    2.  Register test executive steps
    */

    StdOutConsole.Configure(StdOut,StdOut->GetRegisteredConsoleHandle("StdOut"));
    StdSysConsole.Configure(StdOut,StdOut->GetRegisteredConsoleHandle("StdSys"));
    StdTraceConsole.Configure(StdOut,StdOut->GetRegisteredConsoleHandle("StdTrace"));
    /*  Configure the text output channels */

    Cmds=TheAppEngine->iGet<CmdRepository::iMethodServer>(ModuleId);
    /*  Get an interface to the command repository */


    if (Cmds) {
    /*  Register command line directives 
        1.  Typing 'Command1<cr>' at the console command line input will execute the 'ACommandLineDirective()' function 
        2.  Typing 'help' at the command line input will display all registered application commands
            Example:
                help<cr> will display all registered application commands
                help,1<cr> will display all registered system control commands
                help,2>cr> will display all registered framework control commands
                help,3,<cr> will display all registered administration commands
        */

        Cmds->RegisterApplicationCmd    ("Command1",	    new Ucfx(&TplModule::ACommandLineDirective, this),     "(param1,param2)\tA demo command line directive");

        Cmds->RegisterApplicationCmd 	("app cmd",			new Ucfx(&TplModule::DummyTest,this),		"()\tThis is a application command function");
        Cmds->RegisterSystemCmd		 	("sys-cmd",			new Ucfx(&TplModule::DummyTest,this),		"()\tThis is a system command function");
        Cmds->RegisterFrameworkCmd 		("fm-cmd",			new Ucfx(&TplModule::DummyTest,this),		"()\tThis is a framework function");
        Cmds->RegisterAdminCmd		 	("admin-cmd",		new Ucfx(&TplModule::DummyTest,this),		"())\tThis is an admin function");
    }

    if (TheTestExec) {
    /*  Register all test executive steps and the Ctor/Dtor manager for all test sessions and sequences 
        */

        TheTestExec->RegisterTestMgr(new Aobj<TplModule,TestXtor>(&TplModule::ManageTestSequences,this));
        /*  Register a method to manage session and sequence CTOR's */

        TheTestExec->RegisterTestFunction("GetSn",	"()\tGet/verify the UUT serial number",     new Ucfx(&TplModule::CalledAfterTestExecSnInput, this));
        TheTestExec->RegisterTestFunction("Save Data","()\tA demo test executive step",         new Ucfx(&TplModule::ATestExecutiveStep, this));
        /*  Register test executive test steps
            1.  The test steps will appear in the GUI in the order in which they are registered
            2.  Each test step will be assigned a text command t1-tn based on the order in which they are registered
                a.  Typing 't2<cr>' at the command line input will execute the second test step
            */
    }

    return(1);
}

int TplModule::ManageTestSequences(TestXtor xtor) {
/*  manage sequence and session construction/destruction
    1.  A sequence is a single test iteration of all registered test functions
    2.  A session is a series of test sequences
    3.  The return value is currently unused

    Note:
        throw(IOString msg) to terminate the sequence or session
    */

    switch(xtor.GetXtorType()) {

        case(TestXtorType::SequenceCtor):
        /*  Execute at the start of a test sequence
            */
            break;

        case(TestXtorType::SessionCtor):
        /*  Execute at the start of a test session 
            */
            break;

        case(TestXtorType::SessionDtor):
        /*  Execute at the end of a test session 
            */
            break;

        case(TestXtorType::SequenceDtor):
        /*  Execute at the end of a test sequence
            */
            break;
    }

    return(1);
}

void TplModule::SetStaticConfiguration() {
/*  Any short/fast system configuration can be done here
    1.	This function is executed in the main thread
    */

}

int TplModule::DummyTest(CmdParam msg) {

    ...

    return(1);
}

int TplModule::CalledAfterTestExecSnInput(CmdParam msg) {
/*	Get the serial number from the UUT */

    iUcfTestExec exec(msg,ModuleId);

    exec.SetSn("...");
    /*  Set the serial number to some value
        1.  a value read automatically be the system
        */

    return(1);
}


int TplModule::ACommandLineDirective(CmdParam msg) {
/*	Get the serial number from the UUT */

    DoSomething();

    return(1);
}

int TplModule::ATestExecutiveStep(CmdParam msg) {

    bool status {true};
    iUcfTestExec exec(msg,ModuleId);

    double meas_a = GetMeasuredValue();
    double meas_b = GetAnotherMeasuredValue();
    /*  make measurements */

    if (exec.IsValid()) {
    /*  if this function is called from the test executive 
        */

        exec.SaveMeasurement("Test A","IsValid",meas_a,1,1);
        exec.SaveMeasurement("Test A","IsValid",meas_b,1,1);
    }
    else {
    /*  if this function is called from the command line 
        */

        StdOutConsole.Write("Test A ... Validation", meas_a? iStdOut::Pass: iStdOut::Error);
    }

    return(1);
}

int TplModule::SetToIdle() {
/*  Set the module to an idle condition
    1.  After system initialization
    2.  Between test sequence executions
*/

	return(1); 
}

int TplModule::Activate() { 
/*	'Wakeup' an idle module prior to executing a test sequence */

	return(1); 
}

void TplModule::Shutdown() {
/*  Shutdown the lib on program termination
	 1.  Set any instrumentation to an idle/safe state
	 2.  Any de-allocations as necessary
	*/

}

void TplModule::HandleModuleException(IOString context) {
/*  this method is called from catch handlers when the exception has a system wide impact
    1.  Information must be displayed to the operation
    2.  Information must be written to local log file(s)
    3.  Test operations must be disabled (possibly not when in a 'development' mode
	 4.  This is not called directly from app or system modules where the thrown types may be unknown
    */
	try {

        TheAppEngine->Debugger()->ProcessEvent(new ExceptionEvent(ModuleName,context));
        throw;
	}
	catch(std::exception& e) {

       IOString err("%-.64s exception (%-.128s)",context.c_str(),e.what());
       throw(err);
	}
	catch(IOString msg) {

       IOString err("%-.64s exception (%-.128s)",context.c_str(),msg.c_str());
       throw(err);
	}

	catch(...) {

       IOString err("%-.64s exception (Undefined)",context.c_str());
       throw(err);
	}
}



/* Display the notification */
TheShell->
    UserSync(
        true,
        false,
        "Title",
        "message line1\n"
        "message line2\n"
        "message line3\n"
        "line 4\n"
        "line 5\n"
        "line 6\n"
        "line 7\n"
        "line 8\n"
        "line 9\n"
        "line 10\n"
        );

While(TheUutIsNotManuallyCalibrated()) {
/*  loop until the operator has completed a manual step, that is verified by the call to
    'TheUutIsNotCalibrated()'
    -   Exit if the 'OK' button is selected
    */

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    if (TheShell->GetButtonSelection()==true) break;
}

while(TheShell->GetButtonSelection()==false) {
/* loop until the 'OK' button is selected */

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

TheShell->UserSync(false);
/* Hide the notification */


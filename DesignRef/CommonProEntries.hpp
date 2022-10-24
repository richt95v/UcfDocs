
*pro file configuration entries common for this framework

A Binary
***************************************************************************************************************

SRC=../../src
REPO=../../repository

API_DIR=../../distribution-dev/src

RELEASE_DIR=../../distribution-bin/app
REL_OBJ=../../obj/release

DBG_DIR=../../dbg
DBG_OBJ=../../obj/dbg

TARGET = UniConsole
TEMPLATE = app

debug {

    message("dbg set")

    DESTDIR=$${DBG_DIR}
    OBJECTS_DIR = $${DBG_OBJ}

    unix {
	QMAKE_CXXFLAGS += -g
	QMAKE_CXXFLAGS += -g3
	QMAKE_CXXFLAGS += -ggdb
	QMAKE_CXXFLAGS += -O0
    }
}
else {

    message("release set")

    DESTDIR=$${RELEASE_DIR}
    OBJECTS_DIR = $${RELEASE_OBJ}

    API_FILES+= \
    $${SRC}/Interfaces/iStdOutServer.hpp \
    \
    $${REPO}/Primitives/TokenString.hpp \
    $${REPO}/Primitives/IOString.cpp \
    \
    $${REPO}/System/interfaces/iStdIOChannelSystem.hpp \
    $${REPO}/System/components/InterfaceManager/IxMgr.hpp 

    for(FILE,API_FILES){
	message($$API_FILES)
	QMAKE_POST_LINK += $$quote(cp $${FILE} $${API_DIR}$$escape_expand(\n\t))
    }
	# copy all needed files to the api directory 'post-link'

    QMAKE_PRE_LINK+=$$quote(rm -vf $${API_DIR}
	# clean everything out ot the api directory 'pre-link'
}




A Module 
***************************************************************************************************************

SRC=../../src
REPO=../../repository

RELEASE_DIR=../../distribution-bin
REL_OBJ=../../obj/release

DBG_DIR=../../dbg
DBG_OBJ=../../obj/dbg

API_DIR=../../distribution-dev/src

TARGET = UniConsole
TEMPLATE = app

debug {

    message("dbg set")

    DESTDIR=$${DBG_DIR}/Modules
    OBJECTS_DIR = $${DBG_OBJ}

    unix {
	QMAKE_CXXFLAGS += -g
	QMAKE_CXXFLAGS += -g3
	QMAKE_CXXFLAGS += -ggdb
	QMAKE_CXXFLAGS += -O0
    }
}
else {

    message("release set")

    DESTDIR=$${RELEASE_DIR}/modules
    OBJECTS_DIR = $${REL_OBJ}
}

Common
***************************************************************************************************************

unix {

    message("Defining linux build")

    QMAKE_CXXFLAGS += -Wno-unused-parameter
    QMAKE_CXXFLAGS += -Wno-unused-variable
    QMAKE_CXXFLAGS += -Wno-unused-result
    QMAKE_CXXFLAGS += -Wno-sign-compare
    QMAKE_CXXFLAGS += -Wno-parentheses
    QMAKE_CXXFLAGS += -Wno-parentheses
    QMAKE_CXXFLAGS += -Wno-parentheses
    QMAKE_CXXFLAGS += -Wno-write-strings

    QMAKE_CXXFLAGS += -std=c++11

    LIBS += -lboost_filesystem
    LIBS += -lboost_system
    LIBS += -lboost_program_options
    LIBS+= -ldl
}

win32 {

    message("Defining winx build")

    QMAKE_CXXFLAGS +=  /Zc:strictStrings-

    LIBS+="C:\Program Files (x86)\Windows Kits\10\Lib\10.0.16299.0\um\x64\AdvAPI32.Lib"
    LIBS+=c:/local/boost_1_66_0/lib64-msvc-14.1/libboost_filesystem-vc141-mt-gd-x64-1_66.lib
    LIBS+=c:/local/boost_1_66_0/lib64-msvc-14.1/libboost_system-vc141-mt-gd-x64-1_66.lib
    LIBS+=c:/local/boost_1_66_0/lib64-msvc-14.1/libboost_program_options-vc141-mt-gd-x64-1_66.lib

    DEFINES-=UNICODE

    INCLUDEPATH+= \
    ../../repository/System/Files/win32/ \
    ../../repository/Primitives/win32/
}



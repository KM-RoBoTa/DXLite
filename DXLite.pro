TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt



SOURCES += main.cpp \
    dxsystem/userinputfn.cpp \
    dxsystem/setup.cpp \
    dxsystem/dxsystem.cpp \
    dxsystem/dxsinglemotor.cpp \
    dxsystem/dxsetupmotor.cpp \
    dxsystem/dxmotorsystem.cpp \
    dxsystem/dmodeldetails.cpp \
    dxsystem/additionaltools.cpp \
    dxsystem/dxllibclass/dynamixelclass.cpp \
    dxsystem/dxllibclass/dxlhal.cpp

HEADERS += \
    dxsystem/userinputfn.h \
    dxsystem/user_settings.h \
    dxsystem/setup.h \
    dxsystem/dxsystem.h \
    dxsystem/dxsinglemotor.h \
    dxsystem/dxsetupmotor.h \
    dxsystem/dxmotorsystem.h \
    dxsystem/dmodeldetails.h \
    dxsystem/dconstants.h \
    dxsystem/control_table_constants.h \
    dxsystem/additionaltools.h \
    dxsystem/dxllibclass/dynamixelclass.h \
    dxsystem/dxllibclass/dxlhal.h


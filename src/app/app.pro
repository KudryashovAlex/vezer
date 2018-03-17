TEMPLATE = app
CONFIG -=qt
CONFIG +=console
SOURCES = main.c
LIBS += -L../tmod -ltmod

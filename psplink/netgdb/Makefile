TARGET = netgdb
OBJS = netgdb.o modNet.o psplink.o psplinkUser.o

PRX_EXPORTS=exports.exp
BUILD_PRX=1
USE_USER_LIBS=1

INCDIR = 
CFLAGS = -O0 -G0 -Wall -g -I../modnet/ -I../psplink/ -I../gdbcommon/
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)
LDFLAGS = -L../gdbcommon/

LIBS= -lgdb

LIBDIR =

PSPSDK=$(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak

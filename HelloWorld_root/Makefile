# Simple MakeFile for HelloWorld
# Pietro Chimenti 22/08/2016

CC	= g++
CFLAGS	= `root-config --cflags --glibs`  $(MFLAGS)
RM	= rm -f

default: all

all: HelloRootWorld

HelloRootWorld: HelloRootWorld.cc
	$(CC) $(CFLAGS) -o HelloRootWorld HelloRootWorld.cc

clean:
	$(RM) HelloRootWorld

.PHONY: clean

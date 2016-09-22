# Simple MakeFile for HelloWorld
# Pietro Chimenti 22/08/2016

CC	= gcc
CFLAGS	= -lstdc++ $(MFLAGS)
RM	= rm -f

default: all

all: HelloWorld

HelloWorld: HelloWorld.cc
	$(CC) $(CFLAGS) -o HelloWorld HelloWorld.cc

clean:
	$(RM) HelloWorld

.PHONY: clean

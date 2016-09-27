# Simple MakeFile for HelloWorld
# Pietro Chimenti 22/08/2016

CC      = gcc
CFLAGS  = -lstdc++ `root-config --cflags --glibs` `fltk-config --cxxflags`   `fltk-config --ldflags` $(MFLAGS)
RM      = rm -f

export CC
export CFLAGS
export RM

default: all

all: HelloWorld_gcc HelloWorld_root OOProgramming

HelloWorld_gcc: 
	cd HelloWorld_gcc && $(MAKE) 
	cd ..

HelloWorld_root:
	cd HelloWorld_root && $(MAKE) 
	cd ..

OOProgramming:
	cd OOProgramming && $(MAKE) 
	cd ..


tests: 
#	cd tests && $(MAKE)  
	cd ..

clean:
	cd HelloWorld_gcc && $(MAKE) clean
	cd ..
	cd HelloWorld_root && $(MAKE) clean
	cd ..
	cd OOProgramming && $(MAKE) clean
	cd ..
	cd tests && $(MAKE) clean
	cd ..
 


.PHONY: clean HelloWorld_root HelloWorld_gcc OOProgramming tests

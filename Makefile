# Simple MakeFile for HelloWorld
# Pietro Chimenti 22/08/2016

default: all

all: HelloWorld_gcc HelloWorld_root

HelloWorld_gcc: 
	cd HelloWorld_gcc && $(MAKE) MFLAGS="$(MFLAGS)"
	cd ..

HelloWorld_root:
	cd HelloWorld_root && $(MAKE) MFLAGS="$(MFLAGS)"
	cd ..

tests: 
#	cd tests && $(MAKE)  MFLAGS="$(MFLAGS)"
	cd ..

clean:
	cd HelloWorld_gcc && $(MAKE) clean
	cd ..
	cd HelloWorld_root && $(MAKE) clean
	cd ..
	cd tests && $(MAKE) clean
	cd ..
 


.PHONY: clean HelloWorld_root HelloWorld_gcc tests

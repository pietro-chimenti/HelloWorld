# Make file for OOProgramming Exercises
# Pietro Chimenti 22/08/2016

default: all

all: Ch02 Ch03 

Ch02: 
	cd Ch02 && $(MAKE) 
	cd ..

Ch03:
	cd Ch03 && $(MAKE)
	cd ..
clean:
	cd Ch02 && $(MAKE) clean
	cd Ch03 && $(MAKE) clean
	cd ..

.PHONY: Ch02 Ch03 clean

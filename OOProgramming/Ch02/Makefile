# Makefile for Ch02 of OOProgramming 
# Pietro Chimenti 22/08/2016

default: all

all: chapter.2.2 chapter.2.2-minimal chapter.2.3 chapter.2.6

#      Makefile
#  chapter.2.6.cpp  std_lib_facilities.h

chapter.2.2: chapter.2.2.cpp
	$(CC) $(CFLAGS) -o chapter.2.2 chapter.2.2.cpp

chapter.2.2-minimal: chapter.2.2-minimal.cpp 
	$(CC) $(CFLAGS) -o chapter.2.2-minimal chapter.2.2-minimal.cpp

chapter.2.3: chapter.2.3.cpp
	$(CC) $(CFLAGS) -o chapter.2.3 chapter.2.3.cpp

chapter.2.6: chapter.2.6.cpp
	$(CC) $(CFLAGS) -o chapter.2.6 chapter.2.6.cpp

clean:
	$(RM) chapter.2.2 
	$(RM) chapter.2.2-minimal
	$(RM) chapter.2.3
	$(RM) chapter.2.6

.PHONY: clean

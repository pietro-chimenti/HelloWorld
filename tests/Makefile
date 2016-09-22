# Simple MakeFile for HelloWorld
# Pietro Chimenti 22/08/2016

CC	= g++
CFLAGS	= `root-config --cflags --glibs`  $(MFLAGS)
RM	= rm -f

default: all

all: test_1_hello_gcc 

test_1_hello_gcc: test_1_hello_gcc.cc
	$(CC) $(CFLAGS) -o test_1_hello_gcc test_1_hello_gcc.cc

clean:
	$(RM) test_1_hello_gcc

.PHONY: clean

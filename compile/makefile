SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c

test: compile.o
	@$(CC) -o test compile.o

compile.o: compile.cpp
	@$(CC) $(CFLAGS) compile.cpp -o compile.o

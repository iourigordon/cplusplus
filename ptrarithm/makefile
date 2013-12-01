SHELL = /bin/sh

CC = gcc
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c

ptr_arithm: ptr_arithm.o
	@$(CC) -o ptr_arithm ptr_arithm.o

ptr_arithm.o: ptr_arithm.c
	@$(CC) $(CFLAGS) ptr_arithm.c -o ptr_arithm.o

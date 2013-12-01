SHELL = /bin/sh

CC = gcc
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = constPtrs.o
HDRS =

APPNAME = constptrs

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) $(OBJS) -o $(APPNAME)

constPtrs.o: constPtrs.c
	@$(CC) $(CFLAGS) constPtrs.c

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = exceptions.o
HDRS = 

APPNAME = exceptions

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

exceptions.o: exceptions.cpp
	@$(CC) $(CFLAGS) exceptions.cpp -o exceptions.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

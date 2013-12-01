SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = virtstatic.o
HDRS = 

APPNAME = virtstatic

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

virtstatic.o: virtstatic.cpp
	@$(CC) $(CFLAGS) virtstatic.cpp -o virtstatic.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

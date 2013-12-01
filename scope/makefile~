SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = sizes.o
HDRS = 

APPNAME = sizes

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

derived.o: sizes.cpp
	@$(CC) $(CFLAGS) sizes.cpp -o sizes.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

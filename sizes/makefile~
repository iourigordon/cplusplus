SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = derived.o
HDRS = 

APPNAME = derived

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

derived.o: derived.cpp
	@$(CC) $(CFLAGS) derived.cpp -o derived.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

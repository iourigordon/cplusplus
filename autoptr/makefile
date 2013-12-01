SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = autoptr.o
HDRS = 

APPNAME = autoptr

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

autoptr.o: autoptr.cpp
	@$(CC) $(CFLAGS) autoptr.cpp -o autoptr.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

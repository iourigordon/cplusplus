SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = virtconstdest.o
HDRS = 

APPNAME = virtconstdest

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

virtstatic.o: virtconstdest.cpp
	@$(CC) $(CFLAGS) virtconstdest.cpp -o virtconstdest.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

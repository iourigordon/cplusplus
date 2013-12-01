SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = scope.o
HDRS = 

APPNAME = scope

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

scope.o: scope.cpp
	@$(CC) $(CFLAGS) scope.cpp -o scope.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

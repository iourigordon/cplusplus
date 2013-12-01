SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = cpyconstructor.o
HDRS = 

APPNAME = cpyconstructor

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

cpyconstructor.o: cpyconstructor.cpp
	@$(CC) $(CFLAGS) cpyconstructor.cpp -o cpyconstructor.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

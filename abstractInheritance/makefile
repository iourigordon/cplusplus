SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = purevirtual.o
HDRS = 

APPNAME = purevirtual

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

purevirtual.o: purevirtual.cpp
	@$(CC) $(CFLAGS) purevirtual.cpp -o purevirtual.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

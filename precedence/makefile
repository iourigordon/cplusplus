SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = presedence.o
HDRS = 

APPNAME = presedence

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

presedence.o: presedence.cpp
	@$(CC) $(CFLAGS) presedence.cpp -o presedence.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

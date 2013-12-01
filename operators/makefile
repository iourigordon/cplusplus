SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = operators.o
HDRS = 

APPNAME = operators

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

operators.o: operators.cpp
	@$(CC) $(CFLAGS) operators.cpp -o operators.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

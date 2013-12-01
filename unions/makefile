SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = unions.o
HDRS = 

APPNAME = unions

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

unions.o: unions.cpp
	@$(CC) $(CFLAGS) unions.cpp -o unions.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

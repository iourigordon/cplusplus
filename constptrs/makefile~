SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = mainClasses.o structSample.o
HDRS = structSample.h

APPNAME = classes

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o classes $(OBJS)

mainClasses.o: mainClasses.cpp structSample.h
	@$(CC) $(CFLAGS) mainClasses.cpp -o mainClasses.o

structSample.o: structSample.cpp structSample.h
	@$(CC) $(CFLAGS) structSample.cpp -o structSample.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

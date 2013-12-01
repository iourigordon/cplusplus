SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = c++_struct.o c_func.o
HDRS = 

APPNAME = c_c++

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

c++_struct.o: c++_struct.cpp
	@$(CC) $(CFLAGS) c++_struct.cpp -o c++_struct.o

c_func.o: c_func.c
	@$(CC) $(CFLAGS) c_func.c -o c_func.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

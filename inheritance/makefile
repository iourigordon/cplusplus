SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = inheritance.o a.o b.o c.o d.o e.o f.o
HDRS = a.h b.h c.h d.h e.h f.h

APPNAME = inheritance

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

inheritance.o: inheritance.cpp $(HDRS)
	@$(CC) $(CFLAGS) inheritance.cpp -o inheritance.o

a.o: a.cpp a.h
	@$(CC) $(CFLAGS) a.cpp -o a.o

b.o: b.cpp b.h
	@$(CC) $(CFLAGS) b.cpp -o b.o

c.o: c.cpp c.h
	@$(CC) $(CFLAGS) c.cpp -o c.o

d.o: d.cpp d.h
	@$(CC) $(CFLAGS) d.cpp -o d.o

e.o: e.cpp e.h
	@$(CC) $(CFLAGS) e.cpp -o e.o

f.o: f.cpp f.h
	@$(CC) $(CFLAGS) f.cpp -o f.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

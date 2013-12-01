SHELL = /bin/sh

CC = g++
#CFLAGS = -Wall -Wno-nonnull -O2 -ggdb -c $(incDirs)
CFLAGS = -Wall -ggdb -c
OBJS = calc.o calculator.o
HDRS = calculator.h

APPNAME = calc

$(APPNAME): $(OBJS) $(HDRS)
	@$(CC) -o $(APPNAME) $(OBJS)

calc.o: calc.cpp calculator.h
	@$(CC) $(CFLAGS) calc.cpp -o calc.o

calculator.o: calculator.cpp calculator.h
	@$(CC) $(CFLAGS) calculator.cpp -o calculator.o

clean:
	rm -rf *.o
	rm -rf $(APPNAME)

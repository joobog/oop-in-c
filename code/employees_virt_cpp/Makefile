CFLAGS=-g3 -std=gnu++11 -fms-extensions

objects = main.o

prog: $(objects)
	g++ $(CFLAGS) -o prog $(objects)

main.o: main.cpp debug.hpp

.PHONY: clean
clean:
	rm prog $(objects)

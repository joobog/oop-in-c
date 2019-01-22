CFLAGS=-g3 -std=gnu++11 -fms-extensions

objects = main.o manager.o employee.o

prog: $(objects)
	g++ $(CFLAGS) -o prog $(objects)

main.o: main.cpp debug.hpp
employee.o: employee.hpp employee.cpp
manager.o: manager.hpp manager.cpp

.PHONY: clean
clean:
	rm prog $(objects)

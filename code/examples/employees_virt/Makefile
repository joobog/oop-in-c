CFLAGS=-g3 -std=gnu11 -fms-extensions

objects = manager.o employee.o main.o
objects2 = manager.o employee.o main2.o

prog: $(objects) $(objects2)
	gcc $(CFLAGS) -o prog2 $(objects2)
	gcc $(CFLAGS) -o prog $(objects)

main.o: main.c debug.h
main2.o: main2.c debug.h
employee.o: employee.c employee.h debug.h
manager.o: manager.c manager.h employee.c employee.h debug.h

.PHONY: clean
clean:
	rm prog $(objects)

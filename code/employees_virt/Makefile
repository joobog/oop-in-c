CFLAGS=-g3 -std=gnu11 -fms-extensions


objects = manager.o employee.o main.o

prog: $(objects)
	gcc $(CFLAGS) -o prog $(objects)

main.o: main.c debug.h
employee.o: employee.c employee.h debug.h
manager.o: manager.c manager.h employee.c employee.h debug.h

.PHONY: clean
clean:
	rm prog $(objects)

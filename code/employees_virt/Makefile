CFLAGS=-g3 -std=gnu11 -fms-extensions


objects = manager.o employee.o main.o

prog: $(objects)
	gcc $(CFLAGS) -o prog $(objects)

main.o: main.c
employee.o: employee.c employee.h
manager.o: manager.c manager.h employee.c employee.h

.PHONY: clean
clean:
	rm prog $(objects)

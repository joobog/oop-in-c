CFLAGS=-g3 -std=gnu11 -fms-extensions


objects = main.o

prog: $(objects)
	gcc $(CFLAGS) -o prog $(objects)

main.o: main.c

.PHONY: clean
clean:
	rm prog $(objects)

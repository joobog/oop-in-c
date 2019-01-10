CFLAGS=-g3


objects = date.o main.o

prog: $(objects)
	gcc $(CFLAGS) -o prog $(objects)

main.o: main.c
date.o: date.c date.h

.PHONY: clean
clean:
	rm prog $(objects)

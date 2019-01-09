CFLAGS=-g3


objects = A.o main.o

prog: $(objects)
	gcc $(CFLAGS) -o prog $(objects)

main.o: main.c
A.o: A.c A.h

.PHONY: clean
clean:
	rm prog $(objects)

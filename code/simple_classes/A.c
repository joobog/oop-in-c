#ifndef  A_INC
#define  A_INC

#include <stdlib.h>
#include <stdio.h>
#include <A.h>

void A_construct(A* this, int foo, int bar) {
	this->foo = malloc(sizeof(*(this->foo)));
	*(this->foo) = foo;
	this->bar = bar;
}

void A_increment_all(A* this) {
 (*(this->foo))++;
 this->bar++;
}

void A_print_all(A* this) {
 printf("foo: %d, bar: %d\n", *(this->foo), this->bar);
}

void A_destruct(A* this) {
	free(this->foo);
}

#endif   /* ----- #ifndef A_INC  ----- */

#include <stdlib.h>
#include <stdio.h>
#include <A.h>

int main(int argc, char** argv) {
	A a;
	A_construct(&a, 10, 10);
	A_print_all(&a);
	A_increment_all(&a);
	A_print_all(&a);
	A_destruct(&a);
}

// Output
//foo: 10, bar: 10
//foo: 11, bar: 11


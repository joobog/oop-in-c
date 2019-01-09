typedef struct A {
 int* foo;
 int bar;
} A;

void A_construct(A* this, int foo, int bar);
void A_increment_all(A* this);
void A_print_all(A* this);
void A_destruct(A* this);


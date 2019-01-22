/* virtual table (instantiation + initialization) */
static manager_vtbl_t manager_vtbl = {
	.print = manager_print,
  .add_member = manager_add_member
};

/* default constructor */
void manager_constructor(void *_this) {
  ((employee_t*) this)->vtbl = (employee_vtbl_t*) &manager_vtbl;
	/* do something */
}

/* member functions (implementation) */
int manager_add_member(void *_this, employee_t *employee) {
	/* do something */
 	return 0; 
}

void manager_print(void *_this) {
	/* do something */
}

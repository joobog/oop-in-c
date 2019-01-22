/*  virtual table (instantiation + initialization) */
static employee_vtbl_t employee_vtbl = {
  .print = employee_print
};

void employee_constructor(void *_this) {
	((employee_t*) this)->vtbl = &employee_vtbl;
}

/* member functions (implementation) */
void employee_print(void *_this) {
	/* do something */
}

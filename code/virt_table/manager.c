/* virtual table (instantiation) */
static manager_vtbl_t manager_vtbl = {
	.print = manager_print,
  .add_member = manager_add_member
};

/* member functions (implementation) */
int manager_add_member(void *_this, employee_t *employee) { return 0; }
void manager_print(void *_this) {}

/*  virtual table (instantiation) */
static employee_vtbl_t employee_vtbl = {
  .print = employee_print
};

/* member functions (implementation) */
void employee_print(void *_this) {}

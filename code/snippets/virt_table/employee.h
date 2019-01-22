/* virtual table (type) */
typedef struct employee_vtbl_t {
	void  (*print)(void *employee);
} employee_vtbl_t;

/*  base class */
typedef struct employee_t {
	employee_vtbl_t *vtbl;
} employee_t;

/* default constructor */
void employee_constructor(void *_this);

/* member function (declaration) */
void employee_print(void *_this);



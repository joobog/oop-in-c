/* virtual table (forward declaration) */
typedef struct employee_vtbl_t employee_vtbl_t;

/*  base class */
typedef struct employee_t {
	employee_vtbl_t *vtbl;
} employee_t;

/* member function (declaration) */
void employee_print(void *_this);

/* virtual table (type) */
struct employee_vtbl_t {
	void  (*print)(void *employee);
};


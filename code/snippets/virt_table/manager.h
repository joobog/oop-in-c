/* virtual table (declaration) */
typedef struct manager_vtbl_t {
	struct employee_vtbl_t;
	int (*add_member)(void *_this, employee_t *employee);
} manager_vtbl_t;

/* derived class */
typedef struct manager_t {
	employee_t super;
} manager_t;

/* default constructor */
void manager_constructor(void *_this);

/* member functions (declaration) */
int manager_add_member(void *_this, employee_t *employee);
void manager_print(void *_this);


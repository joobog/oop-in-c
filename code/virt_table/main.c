/* Employee */
typedef struct employee_vtbl_t employee_vtbl_t;

typedef struct employee_t {
	employee_vtbl_t *vtbl;
} employee_t;

void employee_print(void *_this);

struct employee_vtbl_t {
	void  (*print)(void *employee);
};


static employee_vtbl_t employee_vtbl = {
  .print = employee_print
};

void employee_constructor(void *_this, char *firstname, char *lastname) {}
void employee_destructor(void *_this) {}
void employee_print(void *_this) {}


/* Manager */
typedef struct manager_vtbl_t manager_vtbl_t;

typedef struct manager_t {
	employee_t super;
} manager_t;

int manager_add_member(void *_this, employee_t *employee);
void manager_print(void *_this);

struct manager_vtbl_t {
	struct employee_vtbl_t;
	int (*add_member)(void *_this, employee_t *employee);
};

static manager_vtbl_t manager_vtbl = {
	.print = manager_print,
  .add_member = manager_add_member
};


void manager_constructor(void *_this, char *firstname, char *lastname, int level) {}
void manager_destructor(void *_this) {}
int manager_add_member(void *_this, employee_t *employee) { return 0; }
void manager_print(void *_this) {}


/* main */
int main(int argc, char** argv) {
	employee_t employee;
	employee_constructor(&employee, "Max", "Mustermann");
	manager_t manager;
	manager_constructor(&manager, "Matthias", "Gross", 1);

	((manager_vtbl_t*) ((employee_t*) &manager)->vtbl)->add_member(&manager, &employee);
	((manager_vtbl_t*) ((employee_t*) &manager)->vtbl)->print(&manager);

	manager_destructor(&manager);
	employee_destructor(&employee);
}


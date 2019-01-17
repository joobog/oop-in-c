#ifndef  employee_INC
#define  employee_INC


typedef struct employee_vtbl_t employee_vtbl_t;

typedef struct employee_t {
	employee_vtbl_t* vtbl;
	char* firstname;
	char* lastname;
} employee_t;

void employee_constructor(employee_t* this, char* firstname, char* lastname);
void employee_destructor(employee_t* this);
void employee_print(employee_t* this);

struct employee_vtbl_t {
	void  (*print)(employee_t *employee);
};

#endif   /* ----- #ifndef employee_INC  ----- */

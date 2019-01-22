#ifndef  employee_INC
#define  employee_INC

#define M_employee_print(me) ((employee_t*)(me))->vtbl->print(me)

typedef struct employee_vtbl_t {
	void  (*print)(void *_this);
} employee_vtbl_t;

typedef struct employee_t {
	employee_vtbl_t *vtbl;
	char *firstname;
	char *lastname;
} employee_t;

void employee_constructor(void *_this, char* firstname, char* lastname);
void employee_destructor(void *_this);
void employee_print(void *_this);


#endif   /* ----- #ifndef employee_INC  ----- */

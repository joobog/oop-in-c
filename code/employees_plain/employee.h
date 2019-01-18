#ifndef  employee_INC
#define  employee_INC

typedef struct employee_t {
	char *firstname;
	char *lastname;
	char *job;
} employee_t;

void employee_constructor(employee_t *this, char *firstname, char *lastname, char *job);
void employee_destructor(employee_t *this);
void employee_print(employee_t *this);

#endif   /* ----- #ifndef employee_INC  ----- */

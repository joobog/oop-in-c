#ifndef  employee_INC
#define  employee_INC

/* class */
typedef struct employee_t {
	/* member variables */
	char *firstname;
	char *lastname;
	char *job;
} employee_t;

/* constructor and "rule of three" functions */
void employee_constructor(employee_t *this, char *firstname, char *lastname, char *job);
void employee_destructor(employee_t *this);
void employee_copy(employee_t *this, employee_t *source);
void employee_assign(employee_t *this, employee_t *source);

/* member functions */
void employee_print(employee_t *this);

#endif   /* ----- #ifndef employee_INC  ----- */

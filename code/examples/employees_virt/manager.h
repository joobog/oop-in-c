#ifndef  manager_INC
#define  manager_INC

#include "employee.h"

#define M_manager_add_member(me, employee) \
	(((manager_vtbl_t*) ((employee_t*) me)->vtbl)->add_member((me), (employee)))
#define M_manager_print(me) ( ((manager_vtbl_t*) ((employee_t*) me)->vtbl)->print(me))

typedef struct manager_vtbl_t {
	struct employee_vtbl_t;
	int (*add_member)(void *_this, employee_t *employee);
} manager_vtbl_t;

typedef struct manager_t {
	employee_t super;
	int level;
	unsigned int max_group_size;
	unsigned int group_size;
	employee_t **group;
} manager_t;

void manager_constructor(void *_this, char *firstname, char *lastname, int level);
void manager_destructor(void *_this);
int manager_add_member(void *_this, employee_t *employee);
void manager_print(void *_this);


#endif   /* ----- #ifndef manager_INC  ----- */

#ifndef  manager_INC
#define  manager_INC

#include "employee.h"

typedef struct manager_t manager_t;
//typedef struct manager_vtbl_t manager_vtbl_t;

void manager_constructor(manager_t *this, char* firstname, char* lastname, int level);
void manager_destructor(manager_t *this);
int manager_add_member(manager_t *this, employee_t* employee);
void manager_print(manager_t *this);

typedef struct manager_vtbl_t {
	struct employee_vtbl_t;
	int (*add_member)(manager_t* manager, employee_t* employee);
} manager_vtbl_t;

typedef struct manager_t {
	employee_t super;
	int level;
	unsigned int max_group_size;
	unsigned int group_size;
	employee_t** group;
} manager_t;

#endif   /* ----- #ifndef manager_INC  ----- */

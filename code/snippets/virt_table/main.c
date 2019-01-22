/* Employee */
#include "employee.h"
#include "employee.c"

/* constructor and destructor */
void employee_destructor(void *_this) {}

/* Manager */
#include "manager.h"
#include "manager.c"

/* constructor and destructor */
void manager_destructor(void *_this) {}

/* main */
int main(int argc, char** argv) {
	employee_t employee;
	employee_constructor(&employee);
	manager_t manager;
	manager_constructor(&manager);

#include "call.c"	
#include "call2.c"
#include "call3.c"

	manager_destructor(&manager);
	employee_destructor(&employee);
}


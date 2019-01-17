#include "employee.h"
#include "manager.h"

#define MANAGER ((manager_vtbl_t*) manager.super.vtbl)->
#define employee_print(me) ((me)->vtbl->print(me))

int main(int argc, char** argv) {
	employee_t employee1;
	employee_constructor(&employee1, "Ulrike", "Müller");

	employee_t employee2;
	employee_constructor(&employee2, "Hans", "Meier");

	manager_t manager;
	manager_constructor(&manager, "Matthias", "Gross", 1);
	manager.
	((manager_vtbl_t*) manager.super.vtbl)->add_member(&manager, &employee1);
	((manager_vtbl_t*) manager.super.vtbl)->add_member(&manager, &employee2);
	employee_print(&manager.super);

	manager_destructor(&manager);
	employee_destructor(&employee2);
	employee_destructor(&employee1);
}


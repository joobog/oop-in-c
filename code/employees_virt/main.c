#include <stdlib.h>
#include <stdio.h>

#include "employee.h"
#include "manager.h"

int main(int argc, char** argv) {
	employee_t employee1;
	employee_constructor(&employee1, "Ulrike", "Müller");
	employee_t employee2;
	employee_constructor(&employee2, "Hans", "Meier");
	manager_t manager;
	manager_constructor(&manager, "Matthias", "Gross", 1);
	manager_destructor(&manager);
	manager.super.vtbl->print((employee_t*) &manager);
	((manager_vtbl_t*) manager.super.vtbl)->add_member(&manager, &employee1);

	employee_destructor(&employee1);
	employee_destructor(&employee2);
}

#include "employee.h"
#include "manager.h"


int main(int argc, char** argv) {
	employee_t employee1;
	employee_constructor(&employee1, "Ulrike", "Müller");

	employee_t employee2;
	employee_constructor(&employee2, "Hans", "Meier");

	manager_t manager;
	manager_constructor(&manager, "Matthias", "Gross", 1);

	M_manager_add_member(&manager, &employee1);
	M_manager_add_member(&manager, &employee2);
	M_manager_print(&manager);

	employee_t *foo = (employee_t*) &manager;
	M_employee_print(foo);

	manager_destructor(&manager);
	employee_destructor(&employee2);
	employee_destructor(&employee1);
}


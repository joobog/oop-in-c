
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

	employee_t* staff[3];
	staff[0] = &employee1;
	staff[1] = &employee2;
	staff[2] = &manager.super;
	for (int i = 0; i < 3; ++i) {
		M_employee_print(staff[i]);
	}

	manager_destructor(&manager);
	employee_destructor(&employee2);
	employee_destructor(&employee1);
}


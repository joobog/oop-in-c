#include "employee.h"

int main(int argc, char** argv) {
	/*  constructor */
	employee_t employee;
	employee_constructor(&employee, "Ulrike", "Müller", "Designer");
	employee_print(&employee);

	/* copy constructor */
	employee_t copy;
	employee_copy(&copy, &employee);
	employee_print(&copy);

	/* assignment */
	employee_t assignment;
	employee_constructor(&assignment, "Some", "Body", "Employment");
	employee_assign(&assignment, &employee);
	employee_print(&assignment);

	/* destructor */
	employee_destructor(&assignment);
	employee_destructor(&copy);
	employee_destructor(&employee);
}


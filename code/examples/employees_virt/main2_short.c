#include "employee.h"
#include "manager.h"

int main(int argc, char** argv) {
	/* create employees and manager */

	employee_t* staff[3];
	staff[0] = &employee1;
	staff[1] = &employee2;
	staff[2] = &manager.super;
	for (int i = 0; i < 3; ++i) {
		M_employee_print(staff[i]);
	}

	/* clean up */
}

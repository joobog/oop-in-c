#include "employee.h"

int main(int argc, char** argv) {
	employee_t employee;
	employee_constructor(&employee, "Ulrike", "Müller", "Designer");
	employee_print(&employee);
	employee_destructor(&employee);
}


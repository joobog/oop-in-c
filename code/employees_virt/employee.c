#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "employee.h"

static employee_vtbl_t employee_vtbl = {employee_print};

void employee_constructor(employee_t *this, char* firstname, char* lastname) {
	this->vtbl = (employee_vtbl_t*) &employee_vtbl;
	this->firstname = strdup(firstname);
	this->lastname = strdup(lastname);
}

void employee_destructor(employee_t *this) {
	free(this->firstname);
	free(this->lastname);
}

void employee_print(employee_t *this) {
	printf("Employee: %s %s\n", this->firstname, this->lastname);
}


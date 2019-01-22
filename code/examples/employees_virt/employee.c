#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "debug.h"
#include "employee.h"

static employee_vtbl_t employee_vtbl = {
  .print = employee_print
};

void employee_constructor(void *_this, char *firstname, char *lastname) {
	employee_t *this = _this;
	DEBUGMSG("%s %s", firstname, lastname);
	this->vtbl = (employee_vtbl_t*) &employee_vtbl;
	this->firstname = strdup(firstname);
	this->lastname = strdup(lastname);
}

void employee_destructor(void *_this) {
	employee_t *this = _this;
	DEBUGMSG("%s %s", this->firstname, this->lastname);
	free(this->firstname);
	free(this->lastname);
}

void employee_print(void *_this) {
	employee_t *this = _this;
	DEBUGMSG("%s %s", this->firstname, this->lastname);
	printf("Employee: %s %s\n", this->firstname, this->lastname);
}


#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "debug.h"
#include "employee.h"

void employee_constructor(employee_t *this, char *firstname, char *lastname, char* job) {
	DEBUGMSG("");
	this->firstname = strdup(firstname);
	this->lastname = strdup(lastname);
	this->job = strdup(job);
}

void employee_destructor(employee_t *this) {
	DEBUGMSG("");
	free(this->firstname);
	free(this->lastname);
	free(this->job);
}

void employee_print(employee_t *this) {
	DEBUGMSG("");
	printf("Employee: %s %s - %s\n", this->firstname, this->lastname, this->job);
}


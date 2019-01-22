#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "debug.hpp"
#include "employee.hpp"

Employee::Employee(const char* firstname, const char* lastname) {
	DEBUGMSG("%s %s", firstname, lastname);
	this->firstname = strdup(firstname);
	this->lastname = strdup(lastname);
}

Employee::~Employee() {
	DEBUGMSG("%s %s", this->firstname, this->lastname);
	free(this->firstname);
	free(this->lastname);
}

void Employee::print() {
	DEBUGMSG("%s %s", this->firstname, this->lastname);
	printf("Employee: %s %s\n", this->firstname, this->lastname);
}

#include <stdio.h>
#include <stdlib.h>
#include "manager.h"

static manager_vtbl_t manager_vtbl = {manager_print, manager_add_member};

void manager_constructor(manager_t *this, char* firstname, char* lastname, int level) {
	employee_constructor((employee_t*) this, firstname, lastname);
	this->super.vtbl = (employee_vtbl_t*) &manager_vtbl;
	this->max_group_size = 10;
	this->group_size = 0;
	this->group = malloc(sizeof(*(this->group)));
	this->level = level;
}

void manager_destructor(manager_t *this) {
	free(this->group);
	employee_destructor((employee_t*) this);
}

int manager_add_member(manager_t *this, employee_t* employee) {
	if (this->group_size < this->max_group_size) {
		this->group[this->group_size] = employee;
		this->group_size +=1;
		return 0;
	}
	else {
		return 1;
	}
}

void manager_print(manager_t *this) {
	printf("Manager (%d) %s %s\n", this->level, this->super.firstname, this->super.lastname);
	for (int i = 0; i < this->group_size; i++) {
		this->group[i]->vtbl->print(this->group[i]);
	}
}

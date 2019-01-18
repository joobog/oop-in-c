#include <stdio.h>
#include <stdlib.h>

#include "manager.h"
#include "debug.h"

static manager_vtbl_t manager_vtbl = {
	.print = manager_print,
  .add_member = manager_add_member
};

void manager_constructor(void *_this, char *firstname, char *lastname, int level) {
	manager_t *this = _this;
	employee_constructor(&this->super, firstname, lastname);
	DEBUGMSG("%s %s", firstname, lastname);
	this->super.vtbl = (employee_vtbl_t*) &manager_vtbl;
	this->max_group_size = 10;
	this->group_size = 0;
	this->group = malloc(sizeof(*(this->group)) * this->max_group_size);
	this->level = level;
}

void manager_destructor(void *_this) {
	manager_t *this = _this;
	DEBUGMSG("%s %s", this->super.firstname, this->super.lastname);
	free(this->group);
	employee_destructor((employee_t*) this);
}

int manager_add_member(void *_this, employee_t *employee) {
	manager_t *this = _this;
	DEBUGMSG("%s %s", this->super.firstname, this->super.lastname);
	if (this->group_size < this->max_group_size) {
		this->group[this->group_size] = employee;
		this->group_size +=1;
		return 0;
	}
	else {
		return 1;
	}
}

void manager_print(void *_this) {
	manager_t *this = _this;
	DEBUGMSG("%s %s", this->super.firstname, this->super.lastname);
	printf("Manager (%d) %s %s\n", this->level, this->super.firstname, this->super.lastname);
	for (int i = 0; i < this->group_size; i++) {
		this->group[i]->vtbl->print(this->group[i]);
	}
}

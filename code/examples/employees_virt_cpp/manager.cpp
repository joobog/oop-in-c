#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "debug.hpp"
#include "manager.hpp"

Manager::Manager(const char* firstname, const char* lastname, int level) : Employee(firstname, lastname) {
	DEBUGMSG("%s %s", firstname, lastname);
	this->max_group_size = 10;
	this->group_size = 0;
	this->group = static_cast<Employee**>( malloc(sizeof(*(this->group)) * this->max_group_size) );
	this->level = level;
}

Manager::~Manager() {
	DEBUGMSG("%s %s", this->firstname, this->lastname);
	free(this->group);
}

int Manager::add_member(Employee* employee) {
	DEBUGMSG("%s %s", this->firstname, this->lastname);
	if (this->group_size < this->max_group_size) {
		this->group[this->group_size] = employee;
		this->group_size += 1;
		return 0;
	}
	else {
		return 1;
	}
}

void Manager::print() {
	DEBUGMSG("%s %s", this->firstname, this->lastname);
	printf("Manager (%d) %s %s\n", this->level, this->firstname, this->lastname);
	for (int i = 0; i < this->group_size; i++) {
		this->group[i]->print();
	}
}

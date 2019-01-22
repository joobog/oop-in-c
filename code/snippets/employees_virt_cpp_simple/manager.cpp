#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "debug.hpp"
#include "manager.hpp"

Manager::Manager(const char* fn, const char* ln, int level) 
	: Employee(fn, ln) {
	/* do something */
}

Manager::~Manager() {
	/* do something */
}

int Manager::add_member(Employee* employee) {
	/* do something */
	return 0;
}

void Manager::print() {
	/* do something */
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "debug.hpp"

//using namespace std;

class Employee {
	protected:
		char* firstname;
		char* lastname;
	public:
		Employee(const char* firstname, const char* lastname) {
			DEBUGMSG("");
			this->firstname = strdup(firstname);
			this->lastname = strdup(lastname);
		}
		void print() {
			DEBUGMSG("");
			printf("Employee: %s %s\n", this->firstname, this->lastname);
		}
		~Employee() {
			DEBUGMSG("");
			free(this->firstname);
			free(this->lastname);
		}
};


class Manager : public Employee {
	int max_group_size;
	int group_size;
	int level;
	Employee** group;

	public:
		Manager(const char* firstname, const char* lastname, int level) : Employee(firstname, lastname) {
			DEBUGMSG("");
			this->max_group_size = 10;
			this->group_size = 0;
			this->group = static_cast<Employee**>(malloc(sizeof(*(this->group))));
			this->level = level;
		}

		~Manager() {
			DEBUGMSG("");
			free(this->group);
		}

		int add_member(Employee* employee) {
			DEBUGMSG("");
			if (this->group_size < this->max_group_size) {
				this->group[this->group_size] = employee;
				this->group_size += 1;
				return 0;
			}
			else {
				return 1;
			}
		}

		void print() {
			DEBUGMSG("");
			printf("Manager (%d) %s %s\n", this->level, this->firstname, this->lastname);
			for (int i = 0; i < this->group_size; i++) {
				this->group[i]->print();
			}
		}
};


int main(int argc, char** argv) {
//	Employee employee{"Ulrike", "Müller"};
//	employee.print();

	Manager manager{"Ulrike", "Müller", 10};
	manager.print();
}

#include "employee.hpp"
#include "manager.hpp"

int main(int argc, char** argv) {
	Employee employee1{"Ulrike", "Müller"};
	Employee employee2{"Hans", "Meier"};

	Manager manager{"Matthias", "Gross", 10};
	manager.add_member(&employee1);
	manager.add_member(&employee2);
	Employee* foo = &manager;
	foo->print();
}

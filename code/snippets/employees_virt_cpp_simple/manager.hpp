#ifndef  manager_INC
#define  manager_INC

#include "employee.hpp"

class Manager : public Employee {
	private:
		int max_group_size;
		int group_size;
		int level;
		Employee** group;
	public:
		Manager(const char* fn, const char* ln, int level);
		~Manager();
		virtual int add_member(Employee* employee);
		virtual void print();
};

#endif   /* ----- #ifndef manager_INC  ----- */

#ifndef  employee_INC
#define  employee_INC


class Employee {
	protected:
		char* firstname;
		char* lastname;
	public:
		Employee(const char* firstname, const char* lastname);
		~Employee();
		virtual void print();
};

#endif   /* ----- #ifndef employee_INC  ----- */

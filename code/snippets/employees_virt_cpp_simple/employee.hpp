#ifndef  employee_INC
#define  employee_INC

/* class */
class Employee {
	protected:
		/* member variables */
		char* firstname;
		char* lastname;
	public:
		/* constructor */
		Employee(const char* fn, const char* ln);
		/* destructor */
		~Employee();
		/* member function */
		virtual void print();
};

#endif   /* ----- #ifndef employee_INC  ----- */

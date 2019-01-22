#define M_employee_print(me) ((employee_t*)(me))->vtbl->print(me)
#define M_manager_add_member(me, employee) \
	( ((manager_vtbl_t*) ((employee_t*) me)->vtbl)->add_member((me), (employee)))
#define M_manager_print(me) ( ((manager_vtbl_t*) ((employee_t*) me)->vtbl)->print(me))

/*  create and construct employee and manager */
M_employee_print(&employee);
M_manager_add_member(&manager, &employee);
M_manager_print(&manager);
/* destroy manager and employee*/



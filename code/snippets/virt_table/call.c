/*  create and construct employee and manager */
// direct access of virtual table in base object
employee.vtbl->print(&employee);

// explicit access of virtual table in derived object
employee_t* base = (employee_t*) &manager; // 1. up-casting derived object
manager_vtbl_t* vtbl = (manager_vtbl_t*) base->vtbl; // 2. down-casting virtual table
vtbl->add_member(&manager, &employee); // 3. using a virtual function
vtbl->print(&manager); // 3. using another virtual function

// short version
((manager_vtbl_t*) ((employee_t*) &manager)->vtbl)->add_member(&manager, &employee);
((manager_vtbl_t*) ((employee_t*) &manager)->vtbl)->print(&manager);
/* destroy manager and employee*/


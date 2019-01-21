int main(int argc, char** argv) {
	/*  create and construct employee and manager */
	employee->vtbl->add_member(&employee);
	((manager_vtbl_t*) ((employee_t*) &manager)->vtbl)->add_member(&manager, &employee);
	((manager_vtbl_t*) ((employee_t*) &manager)->vtbl)->print(&manager);
	/* destroy manager and employee*/
}


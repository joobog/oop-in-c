	((manager_vtbl_t*) manager.super.vtbl)->add_member(&manager, &employee1);
	((manager_vtbl_t*) ((employee_t*) &manager)->vtbl)->add_member(&manager, &employee2);
	((manager_vtbl_t*) manager.super.vtbl)->print(&manager.super);

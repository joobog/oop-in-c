typedef struct base_t {
	int a;
	int b;
} base_t;

typedef struct derived_t {
	base_t super;
	double a;
	double b;
} derived_t;

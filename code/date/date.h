typedef struct date_t {
	int d;
	int m;
	int y;
} date_t;

void date_constructor(date_t *this, int d, int m, int y);
void date_destructor(date_t *this);

void date_add_year(date_t *this, int n);
void date_add_month(date_t *this, int n);
void date_add_day(date_t *this, int n);

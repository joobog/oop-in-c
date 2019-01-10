#include <stdlib.h>
#include <stdio.h>
#include <date.h>

int main(int argc, char** argv) {
	date_t date;
	date_constructor(&date, 14, 1, 2019);
	date_add_year(&date, 10);
	date_destructor(&date);
}

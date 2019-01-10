#ifndef  date_INC
#define  date_INC
#include <date.h>

void date_constructor(date_t *this, int d, int m, int y) {
	this->d = d;
	this->m = m;
	this->y = y;
}
void date_destructor(date_t *this) { /* do something, if necessary */}

void date_add_year(date_t *this, int n) {this->y += n;}
void date_add_month(date_t *this, int n) { /*do something */}
void date_add_day(date_t *this, int n) { /* do something */}

#endif   /* ----- #ifndef date_INC  ----- */

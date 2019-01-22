derived_t d;
base_t *b1 = (base_t*) &d; // up-casting
base_t *b2 = &d.super; // alternative to up-casting
derived_t *d1 = (derived_t*) b1; // down-casting
derived_t *d2 = (derived_t*) b2; // down-casting

#include <stddef.h>
#include <stdlib.h>
#ifndef DYNAMIC_ARRAY
#define DYNAMIC_RRAY

typedef struct dynamic_array {
    int *data;
    size_t capacity;
    size_t count;
} da;



#endif
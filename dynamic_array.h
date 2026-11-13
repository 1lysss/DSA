#include <stddef.h>
#include <stdlib.h>
#ifndef DYNAMIC_ARRAY
#define DYNAMIC_RRAY

typedef struct dynamic_array {
    int *data;
    size_t capacity;
    size_t count;
} da;

da da_init(size_t size) {
    if (size == 0) return (da){0};

    da arr = {.capacity = size, .count = 0};
    arr.data = (int*)malloc(size*sizeof(int));
    return arr;
}



#endif
#include "dynamic_array.h"


da da_init(size_t size) {
    if (size == 0) return (da){0};

    da arr = {.capacity = size, .count = 0};
    arr.data = (int*)malloc(size*sizeof(int));
    return arr;
}

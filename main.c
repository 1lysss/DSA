#include "ds.h"
#include <assert.h>
int main()
{
    da arr  = da_init(0);

    for (int i = 0; i < 20; i++) {
        da_insert(&arr, i * 10);
        printf("inserted %d -> count=%zu | capacity=%zu\n", i * 10, arr.count, arr.capacity);
    }

    for (size_t i = 0; i < arr.count; i++) {
        printf("data[%zu] = %d\n", i, arr.data[i]);
    }

    return 0;
}

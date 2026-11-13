#include "linked_list.h"

int main()
{
    Node* ll = linked_list(2026);

   ll_insert(&ll, 11);

    printf("ll_count : %d\n", ll_count(ll));
    // ll_print(ll);

    ll_free(ll);
    return 0;
}

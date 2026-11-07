#include "linked_list.h"

int main()
{
    Node* ll = linked_list(0);

    // printf("ll->value : %d\n", ll->value);
    ll_insert(&ll, 12);
    ll_print(ll);
    ll_free(ll);
    return 0;
}

#include "linked_list.h"

int main()
{
    Node* ll = linked_list(4);

    // printf("ll->value : %d\n", ll->value);

    ll_print(ll);
    ll_free(ll);
    return 0;
}

#include "linked_list.h"

int main()
{
    Node* ll = linked_list(0);

    ll_insert(&ll, 18);
    ll_insert(&ll, 23);
    ll_insert(&ll, 11);
    ll_insert(&ll, 9);
    ll_insert(&ll, 1);

    ll_print(ll);
    ll_free(ll);
    return 0;
}

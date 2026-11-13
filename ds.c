#include "ds.h"
#include <assert.h>
da da_init(size_t size) {
    if (size == 0) return (da){0};

    da arr = {.capacity = size, .count = 0};
    arr.data = (int*)calloc(size, size*sizeof(int));
    return arr;
}

void da_insert(da *arr, int val) {
    assert(arr);
    if (!arr->data) {
        arr->capacity = DA_DEFAULT_CAP;
        arr->data = (int*)malloc(arr->capacity*sizeof(int));
        arr->data[0] = val;
        arr->count++;
        return;
    }

    if (arr->count == arr->capacity) {
        arr->data = (int*)realloc(arr->data, 2*(arr->capacity)*sizeof(int));
        arr->data[arr->count] = val;
        arr->capacity *= 2; 
        arr->count++;
        return;
    }

    if (arr->count < arr->capacity) {
        arr->data[arr->count] = val;
        arr->count++;
    }
}

void da_print(da arr) {
    if (!arr.data) return;

    for (int i = 0; i<arr.count; i++) {
        //debugh
        printf("arr.data[%d] = %d\n", i, arr.data[i]);
    }
}

void da_free(da *arr) {
    if (!arr->data) return;

    free(arr->data);
    arr->capacity = 0;
    arr->count = 0;
}
/////////////////////////////////////////////////////////////////////////
/////////////////////////// LINKED LIST START ///////////////////////////

/*
* Initializes a linked list
* @param size specify the size of the linked list
* @return a pointer to the head
*/
Node* linked_list(size_t size) {
    if (size == 0) return NULL;
    Node *temp = calloc(1, sizeof(Node));
    Node *cur = temp;

    for (size_t i = 0; i < size - 1; i++) {
        cur->next = calloc(1, sizeof(Node));
        cur = cur->next;
    }

    return temp;
}


void ll_insert(Node **p_head, int val) {
    Node *cur = *p_head;
    Node *to_add = (Node*)malloc(sizeof(Node));
    to_add->value = val;
    to_add->next = NULL;

    if (!cur) {
        *p_head = to_add;
        return;
    }

    while (cur->next != NULL) {
        cur = cur->next;
    }

    cur->next = to_add;
}


void ll_free(Node *head) {
    if (!head) return;
    if (head ->next == NULL) free(head);
    
    Node *cur = head;

    while(head->next != NULL) {
        head = head->next;
        free(cur);
        cur = head;
    }
    free(cur);
}

void ll_print(Node *head) {
    if (!head) return;
    printf("%d \t", head->value);
    ll_print(head->next);
}

int ll_count(Node *head) {
    if (head == NULL) return 0;
    return 1 + ll_count(head->next);
}

/////////////////////////// LINKED LIST END ///////////////////////////
///////////////////////////////////////////////////////////////////////
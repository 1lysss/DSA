#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#ifndef DS_H
#define DS_H
#define DA_DEFAULT_CAP 8

typedef struct Node{
    int value;
    struct Node *next;
} Node;

typedef struct dynamic_array {
    int *data;
    size_t capacity; // overall space 
    size_t count;  // nmbr of elmnts
} da;

/*
* Initializes a linked list
* @param size specify the size of the linked list
* @return a pointer to the head
*/
Node* ll_init(size_t size);
void ll_insert(Node **p_head, int value);
void ll_free(Node *head);
void ll_print(Node *head);
int ll_count(Node *head);

da da_init(size_t size);
void da_insert(da *arr, int val);
void da_free(da *arr);
void da_print(da arr);
void da_free(da *arr);
void da_remove(da *arr, size_t index);

#endif
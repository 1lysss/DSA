#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node{
    int value;
    struct Node *next;
} Node;

Node* linked_list(size_t size);
void ll_insert(Node **p_head, int value);
void ll_free(Node *head);
void ll_print(Node *head);

#endif
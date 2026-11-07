#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "linked_list.h" 

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
    
    if (cur == NULL) {
        perror("ll_insert : list is NULL\n");
        return;
    }
    
    while(cur->next != NULL) {
        cur = cur->next;  // reach the last elem
    } 

    Node *new = (Node*)malloc(sizeof(Node)); 
    cur->next = new;
    new->value = val;
}


void ll_free(Node *head) {
    Node *cur = head;

    if (head ->next == NULL) free(head);

    while(head->next != NULL) {
        head = head->next;
        free(cur);
        cur = head;
    }
    free(cur);
}

// ill try a recursive approach
void ll_print(Node *head) {
    if (!head) return;
    printf("%d \t", head->value);
    return ll_print(head->next);
}
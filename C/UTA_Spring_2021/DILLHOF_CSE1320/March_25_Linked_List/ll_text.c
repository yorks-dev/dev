#include <stdio.h>

#include "ll_utils.h"

void traverse(Node *current) {
    if(current != NULL){
        printf("data : %d\n", *((int *)(current->data)));
        traverse(current->next); //recursively
    }
}

int main(){

    int a = 1, b = 2, c = 3;

    Node *head = create_node(&a); 
    Node *node1 = create_node(&b); 
    Node *node2 = create_node(&c); 

    insert_node(&head, node1, 0);
    insert_node(&head, node2, 1);

    traverse(head);


    return 0;
}
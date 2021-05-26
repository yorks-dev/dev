#include "ll_utils.h"

Node *create_node(void *data){
    Node *new_node = calloc(1, sizeof(Node));

    if(new_node != NULL)
        new_node->data = data;

    return new_node;
}

void insert_node(Node **head, Node *new_node, int position){

    Node *prev = NULL;
    Node *current = *head;
    int cur_pos = 0;

    while(current != NULL && cur_pos < position){
        cur_pos++;
        prev = current;
        current = current->next;
    }

    if(*head == current){
        new_node->next = current;
        *head = new_node; 
    } else{
        new_node->next = current;
        prev->next = new_node;
    }

}

// void remove_node(Node **head,  key)
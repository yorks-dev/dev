#include <stdio.h>
#include <stdlib.h>

typedef struct node Node; 

struct node {
    int data;
    Node *next;
};

Node *create_node(int data){

    Node *new_node = calloc(1, sizeof(Node));
    new_node->data = data;

    return new_node;
}

Node *insert_node_head(Node *tail, double data){
    Node *new_node = create_node(data);

    tail->next = new_node;

    return new_node;

}

void traverse(Node *head){

    Node *pos = head;
    while(pos != NULL){
        printf("%d\n", pos->data);
        pos = pos->next;
    }
}

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    for(int i = 0; i < 10; i++){
        
        if(head == NULL){
            head = create_node(i);
            tail = head;
        }
        else{
            tail = insert_node_head(tail, i);
        }
    }

    traverse(head);

}
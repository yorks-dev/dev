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

int main(){

    Node *head = NULL;
    Node *tail = NULL;

    for(int i = 0; i < 10; i++){
        
        if(head == NULL){
            head = create_node(i);
            tail = head;
        } else{
            tail->next = create_node(i);
            tail = tail->next;
        }
    }


}
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
    double data;
    Node *next;
};

// CREATE A NODE and RETURN THE POINTER TO THAT NODE.
Node *create_node(double data){
    Node *n = calloc(1, sizeof(Node));
    n->data = data;

    return n;
}

// INSERT NODE INFRONT
Node *insert_node_head(Node *head, double data){ 

    Node *new_node = create_node(data); 
    // new_node is the address of new node created
    new_node->next = head;

    return new_node;
}

// ITERATIVE TRAVERSAL
void traversal(Node *n){

    while(n != NULL){  // address of that node is NULL (does not exist)
        printf("data : %.2f\n", n->data);
        n = n->next;
    }
}

int main(){

    Node *head = NULL;
    Node *tail = NULL; // For iteration.

    for(int i = 0; i < 10; i++){
        head = insert_node_head(head, i);
    }

    traversal(head);

    return 0;

}
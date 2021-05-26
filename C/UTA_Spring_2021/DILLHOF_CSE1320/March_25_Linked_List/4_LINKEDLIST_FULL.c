#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
    double data;
    Node *next;
};

Node *add_node(double data){
    Node *new_node = calloc(1, sizeof(Node));
    new_node->data = data;

    return new_node;
}

Node *insert_node(Node *new_node, Node *head, int pos){

    // At the starting (traversing from head)
    int cur_pos = 0;
    Node *prev = NULL;  
    Node *current = head;

    // TRAVERSING AND STOPING ONE BEFORE 'POS'

    while(cur_pos < pos && current != NULL){
        // current != null is for what if user entered pos = 500 but there is only 3 node
       // For pos = 4, we need current to be at 4. 
       // for that we need to jump 4 times.
        cur_pos++;
        prev = current;
        current = current->next;
    }
    if(cur_pos > 0){
        new_node->next = current;
        prev->next = new_node;
    } else{
        new_node->next = head;
        return new_node;
    }

    return head;

}

Node *remove_node(Node *head, int pos){

    // At the starting (traversing from head)
    int cur_pos = 0;
    Node *prev = NULL;  
    Node *current = head;

    // TRAVERSING AND STOPING ONE BEFORE 'POS'

    while(cur_pos < pos && current != NULL){
        // current != null is for what if user entered pos = 500 but there is only 3 node
       // For pos = 4, we need current to be at 4. 
       // for that we need to jump 4 times.
        cur_pos++;
        prev = current;
        current = current->next;
    }
    if(cur_pos > 0){  // position is not head
        prev->next = current->next;
        free(current);
    } else{  // position is head
        current = head->next;
        free(head);
        return current;
    }

    return head;

}

Node *reverse_list(Node *head){

    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while(current != NULL){

        next = current->next; //moving next to one step ahead of current 
        current->next = prev;

        // moving pointers one step.
        // don't need to move next because it will happen in next iteration first step.
        prev = current;  
        current = next;

    }
    return prev;

}


void traverse(Node *head){

    Node *current = head;
    while(current != NULL){
        printf("data : %0.2f\n", current->data);
        current = current->next;
    }
}

int main(){
    
    Node *head = NULL;

    for(int i = 0; i < 5; i++){
        Node * new_node = add_node(i / 2.0);
        head = insert_node(new_node, head, i);
    }

    traverse(head);
    printf("\n");

    head = insert_node(add_node(20.5), head, 2);
    traverse(head);

    printf("\n");


    head = insert_node(add_node(-8.5), head, 2);
    traverse(head);

    printf("\n");


    head = remove_node(head, 2);
    traverse(head);

    printf("\n");

    head = reverse_list(head);

    traverse(head);

    printf("\n");

}
#ifndef LL_UTILS_H_
#define LL_UTILS_H_

#include <stdlib.h>

typedef struct node Node;
struct node{
    void *data;  // No assumption (remain general)
    Node *next;
};

Node *create_node(void *);   // accept data of any type
void insert_node(Node **, Node *, int);
void remove_node(Node **, int);

#endif //LL_UTILS_H_
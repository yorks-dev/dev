#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include "utils.h"
#include <stdio.h>

#define MAX_CUSTOMER 128
#define NUM_CUSTOMER_DATA 3

void list_customer(char[][NUM_CUSTOMER_DATA][MAX_LEN], int);
int add_customer(char[][NUM_CUSTOMER_DATA][MAX_LEN], int);
int get_customer(char[][NUM_CUSTOMER_DATA][MAX_LEN], char[], int);
int find_customer(char[][NUM_CUSTOMER_DATA][MAX_LEN], char[], int);



#endif // CUSTOMER_H_
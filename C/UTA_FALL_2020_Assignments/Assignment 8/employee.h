#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "utils.h"
#include <stdio.h>

#define MAX_EMPLOYEE 128
#define NUM_EMPLOYEE_DATA 3

void list_employee(char[][NUM_EMPLOYEE_DATA][MAX_LEN], int);
int add_employee(char[][NUM_EMPLOYEE_DATA][MAX_LEN], int);
int get_employee(char[][NUM_EMPLOYEE_DATA][MAX_LEN], char[], int);
int find_employee(char[][NUM_EMPLOYEE_DATA][MAX_LEN], char[], int);



#endif // EMPLOYEE_H_
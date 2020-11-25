#include "employee.h"

void list_item(char item[][MAX_LEN]) {
	printf("%-6s %-20.20s %-8s\n",
			item[0], item[1], item[2]);
}

void list_employee(char employee_db[][NUM_EMPLOYEE_DATA][MAX_LEN], int num_employee) {
    // Print Header
    printf("%-6s %-20s %-8s\n", "ID", "NAME", "TITLE");    
    printf("------------------------------------------\n");

    for (int i = 0; i < num_employee; i++) {
		list_item(employee_db[i]);
	}
}


int add_employee(char employee_db[][NUM_EMPLOYEE_DATA][MAX_LEN], int num_employee){
    
    if(num_employee <= 128) {

        char buffer[BUFFER_SIZE] = { 0 };
        char temp_item[NUM_EMPLOYEE_DATA][MAX_LEN] = { 0 };

        printf("Enter ID: ");
        fgets(buffer, BUFFER_SIZE, stdin);
        remove_newline(buffer);
        int item_index_ID = get_employee(employee_db, buffer, num_employee);

        if (item_index_ID >= 0) {
            printf("ERROR: ID %s already exists.\n", buffer);
            return num_employee;
        } else {
            strcpy(temp_item[0], buffer);
        }

        printf("Enter Name: ");
        fgets(buffer, BUFFER_SIZE, stdin);
        remove_newline(buffer);
        int item_index_NM = find_employee(employee_db, buffer, num_employee);

        if (item_index_NM >= 0) {
            printf("ERROR: NAME %s already exists.\n", buffer);
            return num_employee;
        } else {
            strcpy(temp_item[1], buffer);
        }

        printf("Enter TITLE: ");
        fgets(buffer, BUFFER_SIZE, stdin);
        remove_newline(buffer);
        strcpy(temp_item[2], buffer);

        for(int i = 0; i < NUM_EMPLOYEE_DATA; i++) {
            strcpy(employee_db[num_employee][i], temp_item[i]);
        }    

        return num_employee +1;    
    }
    else
    {
        return num_employee;
    }
    
}

int get_employee(char employee_db[][NUM_EMPLOYEE_DATA][MAX_LEN], char employee_ID[], int num_employee) 
{
    for (int i = 0; i < num_employee; i++) {
        if (!strcmp(employee_db[i][0], employee_ID)) {
            return i;
        }
    }

    return -1;
}

int find_employee(char employee_db[][NUM_EMPLOYEE_DATA][MAX_LEN], char employee_NM[], int num_employee){
    for(int i = 0; i < num_employee; i++) {
        if(strcmp(employee_db[i][1], employee_NM) == 0) {
            return i;
        }
    }
    return -1;
}


 




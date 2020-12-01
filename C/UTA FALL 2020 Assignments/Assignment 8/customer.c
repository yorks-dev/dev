#include "customer.h"

void list_item_cust(char item[][MAX_LEN]) {
	printf("%-6s %-20.20s %-8s\n",
			item[0], item[1], item[2]);
}

void list_customer(char customer_db[][NUM_CUSTOMER_DATA][MAX_LEN], int num_customer) {
    printf("%-6s %-20s %-8s\n", "ID", "NAME", "PHONE");    
    printf("------------------------------------------\n");

    for (int i = 0; i < num_customer; i++) {
		list_item_cust(customer_db[i]);
	}
}


int add_customer(char customer_db[][NUM_CUSTOMER_DATA][MAX_LEN], int num_customer){
    
    if(num_customer <= 128) {

        char buffer[BUFFER_SIZE] = { 0 };
        char temp_item[NUM_CUSTOMER_DATA][MAX_LEN] = { 0 };

        printf("Enter ID: ");
        fgets(buffer, BUFFER_SIZE, stdin);
        remove_newline(buffer);
        int item_index_ID = get_customer(customer_db, buffer, num_customer);

        if (item_index_ID >= 0) {
            printf("ERROR: ID %s already exists.\n", buffer);
            return num_customer;
        } else {
            strcpy(temp_item[0], buffer);
        }

        printf("Enter Name: ");
        fgets(buffer, BUFFER_SIZE, stdin);
        remove_newline(buffer);
        int item_index_NM = find_customer(customer_db, buffer, num_customer);

        if (item_index_NM >= 0) {
            printf("ERROR: NAME %s already exists.\n", buffer);
            return num_customer;
        } else {
            strcpy(temp_item[1], buffer);
        }

        printf("Enter Phone Number: ");
        fgets(buffer, BUFFER_SIZE, stdin);
        remove_newline(buffer);
        strcpy(temp_item[2], buffer);

        for(int i = 0; i < NUM_CUSTOMER_DATA; i++) {
            strcpy(customer_db[num_customer][i], temp_item[i]);
        }    

        return num_customer +1;    
    }
    else
    {
        return num_customer;
    }
    
}

int get_customer(char customer_db[][NUM_CUSTOMER_DATA][MAX_LEN], char customer_ID[], int num_customer) 
{
    for (int i = 0; i < num_customer; i++) {
        if (!strcmp(customer_db[i][0], customer_ID)) {
            return i;
        }
    }

    return -1;
}

int find_customer(char customer_db[][NUM_CUSTOMER_DATA][MAX_LEN], char customer_NM[], int num_customer){
    for(int i = 0; i < num_customer; i++) {
        if(strcmp(customer_db[i][1], customer_NM) == 0) {
            return i;
        }
    }
    return -1;
}


 




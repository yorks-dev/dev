#include "customer.h"

void list_customer_test() {

    char customer_db[MAX_CUSTOMER][NUM_CUSTOMER_DATA][MAX_LEN] = { 0 };
    int num_customer = 0;
    char buffer[BUFFER_SIZE] = {0};
    // Redirect data from stdin
    fgets(buffer, BUFFER_SIZE, stdin);
    remove_newline(buffer);
    while (strcmp(buffer, "END"))
    {
        parse_raw_csv(buffer, customer_db[num_customer++], NUM_CUSTOMER_DATA );
        fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
    }

    list_customer(customer_db, num_customer);
}

void add_customer_test() {
    char customer_db[MAX_CUSTOMER][NUM_CUSTOMER_DATA][MAX_LEN] = { 0 };
    int num_customer = 0;
    num_customer = add_customer(customer_db, num_customer);
    list_customer(customer_db, num_customer);
}

void get_customer_test() {

    char customer_db[MAX_CUSTOMER][NUM_CUSTOMER_DATA][MAX_LEN] = { 0 };
    int num_customer = 0;
    char buffer[BUFFER_SIZE] = {0};
    // Redirect data from stdin
    fgets(buffer, BUFFER_SIZE, stdin);
    remove_newline(buffer);
    while (strcmp(buffer, "END"))
    {
        parse_raw_csv(buffer, customer_db[num_customer++], NUM_CUSTOMER_DATA );
        fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
    }

    char id[] = "4" ;
    int index = get_customer(customer_db, id, num_customer);
    if(index >= 0) {
        printf("Found at index %d\n", index);
        printf("ID : %s\n", customer_db[index][0]);
    }
    else
    {
        printf("Customer Not Found !\n");
    }

}

void find_customer_test() {

    char customer_db[MAX_CUSTOMER][NUM_CUSTOMER_DATA][MAX_LEN] = { 0 };
    int num_customer = 0;
    char buffer[MAX_LEN] = {0};
    // Redirect data from stdin
    fgets(buffer, BUFFER_SIZE, stdin);
    remove_newline(buffer);
    while (strcmp(buffer, "END"))
    {
        parse_raw_csv(buffer, customer_db[num_customer++], NUM_CUSTOMER_DATA );
        fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
    }

    char name[] = "Revan Thakkar" ;
    int index = find_customer(customer_db, name, num_customer);
    if(index >= 0) {
        printf("Found at index %d\n", index);
        printf("ID : %s\n", customer_db[index][0]);
    }
    else
    {
        printf("Customer Not Found !\n");
    }
    

}

int main() {

    // list_customer_test();
    // add_customer_test();
    get_customer_test();
    // find_customer_test();
}
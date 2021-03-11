#include "customer.h"
#include "employee.h"


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

void list_employee_test() {

    char employee_db[MAX_EMPLOYEE][NUM_EMPLOYEE_DATA][MAX_LEN] = { 0 };
    int num_employee = 0;
    char buffer[BUFFER_SIZE] = {0};
    // Redirect data from stdin
    fgets(buffer, BUFFER_SIZE, stdin);
    remove_newline(buffer);
    while (strcmp(buffer, "END"))
    {
        parse_raw_csv(buffer, employee_db[num_employee++], NUM_EMPLOYEE_DATA );
        fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
    }

    list_employee(employee_db, num_employee);
}

void add_employee_test() {
    char employee_db[MAX_EMPLOYEE][NUM_EMPLOYEE_DATA][MAX_LEN] = { 0 };
    int num_employee = 0;
    num_employee = add_employee(employee_db, num_employee);
    list_employee(employee_db, num_employee);
}

void get_employee_test() {

    char employee_db[MAX_EMPLOYEE][NUM_EMPLOYEE_DATA][MAX_LEN] = { 0 };
    int num_employee = 0;
    char buffer[BUFFER_SIZE] = {0};
    // Redirect data from stdin
    fgets(buffer, BUFFER_SIZE, stdin);
    remove_newline(buffer);
    while (strcmp(buffer, "END"))
    {
        parse_raw_csv(buffer, employee_db[num_employee++], NUM_EMPLOYEE_DATA );
        fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
    }

    char id[] = "4" ;
    int index = get_employee(employee_db, id, num_employee);
    if(index >= 0) {
        printf("Found at index %d\n", index);
        printf("ID : %s\n", employee_db[index][0]);
    }
    else
    {
        printf("Employee Not Found !\n");
    }

}

void find_employee_test() {

    char employee_db[MAX_EMPLOYEE][NUM_EMPLOYEE_DATA][MAX_LEN] = { 0 };
    int num_employee = 0;
    char buffer[MAX_LEN] = {0};
    // Redirect data from stdin
    fgets(buffer, BUFFER_SIZE, stdin);
    remove_newline(buffer);
    while (strcmp(buffer, "END"))
    {
        parse_raw_csv(buffer, employee_db[num_employee++], NUM_EMPLOYEE_DATA );
        fgets(buffer, BUFFER_SIZE, stdin);
		remove_newline(buffer);
    }

    char name[] = "Revan Thakkar" ;
    int index = find_employee(employee_db, name, num_employee);
    if(index >= 0) {
        printf("Found at index %d\n", index);
        printf("ID : %s\n", employee_db[index][0]);
    }
    else
    {
        printf("Employee Not Found !\n");
    }
}
    

int main() {

    list_employee_test();
    // add_employee_test();
    // get_employee_test();
    // find_employee_test();

    // list_customer_test();
    // add_customer_test();
    // get_customer_test();
    // find_customer_test();

    
}

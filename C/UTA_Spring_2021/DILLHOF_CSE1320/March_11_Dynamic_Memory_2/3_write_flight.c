#include "3_flight.h" 

int main(int argc, char **argv){
    if(argc != 2)
        return 1;

    FILE *fp = fopen(argv[1], "a");

    if(fp == NULL){
        return EXIT_FAILURE;
    }

    char buffer[BUFF_SIZE] = {0};
    Flight f = {0};

    printf("Enter a flight code : ");
    fgets(buffer, BUFF_SIZE, stdin);
    remove_newline(buffer);
    strcpy(f.flight_code, buffer);

    printf("Enter a destination code : ");
    fgets(buffer, BUFF_SIZE, stdin);
    remove_newline(buffer);
    strcpy(f.destination_code, buffer);
    
    printf("Enter a arrival code : ");
    fgets(buffer, BUFF_SIZE, stdin);
    remove_newline(buffer);
    strcpy(f.arrival_code, buffer);

    printf("Enter some comments: ");
    fgets(buffer, BUFF_SIZE, stdin);
    remove_newline(buffer); 

    f.size = strlen(buffer) * sizeof(char);
    // printf("%ld\n", f.size);

    fwrite(&f, sizeof(Flight) - sizeof(f.comments), 1, fp);
    fwrite(buffer, sizeof(char) , strlen(buffer), fp);

    fclose(fp);

    return 0;
 
}

void remove_newline(char *str){
    int length = strlen(str);

    if(str[length - 1] == '\n')
        str[length - 1] = '\0';
}
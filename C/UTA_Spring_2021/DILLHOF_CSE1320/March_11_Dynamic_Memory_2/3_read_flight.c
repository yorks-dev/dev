#include "3_flight.h"

int main(int argc, char **argv){
    if(argc != 2)
        return 1;
    
    FILE *fp = fopen(argv[1], "r");

    if(fp == NULL){
        return 1;
    }

    Flight f = {0};

    fread(&f, sizeof(f) - sizeof(f.comments), 1, fp);

    f.comments = malloc(f.size) + 1;  // for null terminatior
    // we cant use fgets because we reading binary

    fread(f.comments, sizeof(char), f.size, fp);

    printf("Flight code      : %s\n", f.flight_code);
    printf("Destination code : %s\n", f.destination_code);
    printf("Arrival code     : %s\n", f.arrival_code);
    printf("Comments         : %s\n", f.comments);

    fclose(fp);
}
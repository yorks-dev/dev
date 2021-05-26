#ifndef FLIGHT_H_
#define FLIGHT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FCODE_SIZE 7
#define ACODE_SIZE 4
#define BUFF_SIZE 1024

typedef struct {

    char flight_code[FCODE_SIZE];
    char destination_code[ACODE_SIZE];
    char arrival_code[ACODE_SIZE];
    long size;  // for size of struct
    char *comments;   // this will change the size of struct
    // this will just add 8 bytes but actually it might be much more
    // thus we cant use sizeof(flight) to get actual size.
    
} Flight;

void remove_newline(char *);

#endif   //FLIGHT_H_
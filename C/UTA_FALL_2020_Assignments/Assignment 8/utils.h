#ifndef UTILS_H_
#define UTILS_H_

#include <string.h>
#include <stdlib.h>

#define MAX_LEN 1024
#define BUFFER_SIZE 1024

int remove_newline(char[]);
int parse_raw_csv(char[], char[][MAX_LEN], int);

#endif // UTILS_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define BUFFER_SIZE 1024

int main() {


    printf("Enter file: ");
    char file[BUFFER_SIZE] = {0};
    fgets(file, BUFFER_SIZE, stdin);
    if(file[strlen(file) - 1] == '\n')
            file[strlen(file)-1] = '\0';

    FILE *fp_in = fopen(file, "r");
    FILE *fp_out = fopen("perfect_square_out.txt", "w");
    char buffer[BUFFER_SIZE] = {0};
    
    if(fp_in == NULL) {
        printf("Could not open file.\n");
        return 1;
    }
    
    while(fgets(buffer, BUFFER_SIZE, fp_in)){
        if(buffer[strlen(buffer) - 1] == '\n')
            buffer[strlen(buffer)-1] = '\0';

        int num = atoi(buffer);
        int root = sqrt(num);
        
        int i = (root * root == num);
        if(i == 1){
            fputs(buffer, fp_out);
            fputs("\n", fp_out);
        }
    }

    fclose(fp_out);
    fclose(fp_in);
}

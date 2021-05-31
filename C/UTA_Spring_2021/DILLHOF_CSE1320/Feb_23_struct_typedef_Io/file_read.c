#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(){

    FILE *fp = fopen("file1.txt", "r");
    char* line;

    if(fp == NULL){
        printf("[ERROR %d] : %s", errno,strerror(errno));
    }

    char buffer[1024] = {0};
    while( (line = fgets(buffer, 1024, fp)) != NULL){
        printf("%d", strlen(buffer));
    }
    fclose(fp);
}
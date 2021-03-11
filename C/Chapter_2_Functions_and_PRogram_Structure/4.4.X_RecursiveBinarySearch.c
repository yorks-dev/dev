#include <stdio.h>
#include<stdlib.h> 
#include <string.h> 
#define ARRSIZE 10
#define MAX_BUFFER 100

int BinarySearch(int low, int high, char* key, char *Array1D[]);


int main(){

    char * Array1D[ARRSIZE] = {"Alia","Bea","Che","Derick","Elena","Fatma","Giun","Henry","Ina","Jaden"};    
    // Storing string in char* needs pointer initialisation.
    //https://stackoverflow.com/questions/24976837/storing-char-array-in-c
    char *key = malloc(sizeof(char) * MAX_BUFFER);
    
    printf("Please input a name to be searched by the binary search algorithm.\n");
    fgets(key, MAX_BUFFER, stdin);
    key[strlen(key) - 1] = '\0';
    printf("%ld\n", strlen(key));

    printf("The index of the target name \"%s\" is %d.\n", key, BinarySearch(0, ARRSIZE - 1, key, Array1D));

}

int BinarySearch(int low, int high, char* key, char *Array1D[])
{
    int mid = (low + high) / 2;

    if(strcmp(key, Array1D[mid]) == 0){
        printf("left = %d, mid = %d, right = %d\n", low, mid, high);
        return mid;
    }

    else{
        // printf("!!!\n");
        if(strcmp(key, Array1D[mid]) < 0){
            // printf("<<<\n");
            printf("left = %d, mid = %d, right = %d\n", low, mid, high);
            return BinarySearch(0, mid - 1, key, Array1D);
        }
        else{
            // printf(">>>\n");
            printf("left = %d, mid = %d, right = %d\n", low, mid, high);
            return BinarySearch(mid + 1, ARRSIZE - 1, key, Array1D);
        }
    }

    return -1;
}
#include <stdio.h>
#include <string.h>

int main(){
    
    int s[] = {1, 2, 3, 4, 5};
    int d[3];

    // Copies from 2nd element 3 ints.
    memcpy(d, (s+1), 3 * sizeof(int));  
    
    printf("%d, %d, %d\n", *d, *(d+1), *(d+2));

    char *string = "Hello Ayush";
    char str_arr[5] = {0};

    // Print the word Ayush
    memcpy(str_arr, (string+6), 5);
    printf("%s\n", str_arr);
}
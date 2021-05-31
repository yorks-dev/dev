#include <stdio.h>
#include <string.h>

void replace(char* arr1, char* arr2){
    int temp = 0;
    for(int i = 0; i < 10; i++){
        if((i+3) % 2 == 0){
            temp = *(arr2 + i);
            *(arr2 + i) = *(arr1 + i);
            *(arr1 + i) = temp;
        }
    }
}

int main(){


    char char1[100] = {0};
    char char2[100] = {0};

    printf("Enter str 1 : ");
    fgets(char1, 100, stdin);
    char1[strlen(char1) - 1] = '\0';

    printf("Enter str 2 : ");
    fgets(char2, 100, stdin);
    char2[strlen(char2) - 1] = '\0';


    // Replace every second character. (Assume same length)
    replace(char1, char2);

    printf("%s\n", char1);
    printf("%s\n", char2);


}


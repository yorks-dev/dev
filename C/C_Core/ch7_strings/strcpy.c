#include <stdio.h>
#include <string.h>

#define MAX_LEN 15

void str_cpy(char *str1, char *str2){
    while(*str1 != '\0'){
        *str2 = *str1;
        str1++;
        str2++;
    }
}

int main(void)
{
    char *str1 = "hey Ayush !"; 
    char str2[MAX_LEN] = {};  //initializes as all zeros

    // strcpy(str2, str1);
    str_cpy(str1, str2);

    printf("String 1 : %s\n", str1);
    printf("String 2 : %s\n", str2);

    return 0;
}

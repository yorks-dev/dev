#include <stdio.h>

#define MAX_BUFFER 1024
int main(void)
{
    FILE *fp;
    char s[MAX_BUFFER];
    int linecount = 0;

    fp = fopen("./txtFiles/lines.txt", "r");
    
    while(fgets(s, MAX_BUFFER, fp) != NULL){
        printf("%d: %s", ++linecount, s);
    }

    int a[5] = {0, 1, 2, 3, 4};
    a[4] = 5;
    a[12] = "77";  
} 
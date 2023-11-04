/* Read formatted txt */
// Whale_name Length Weight

#include <stdio.h>
#define MAX_BUFFER 1024

int main(void){
    
    struct whale{
        char name[MAX_BUFFER];
        float length;
        int weight;
    };

    FILE *fp;

    if( (fp = fopen("~/Dev/c_programming/ch9_fileIO/txtFiles/formatted_IO.txt", "r")) == NULL){
        printf("Error opening file\n", stderr); 
    }
    struct whale whale1 = {};

    while (fscanf(fp, "%s %f %d", whale1.name, &(whale1.length), &(whale1.weight)) != EOF)
    {
        printf("%s whale, %d tonnes, %.1f meters\n", whale1.name, whale1.weight, whale1.length);
    }
    
    fclose(fp);

}
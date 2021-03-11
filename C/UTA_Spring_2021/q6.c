#include <stdio.h>
#include <string.h>

int main()
{
    char chararr[10][10] = {"Che","Henry","Alia","Derick","Elena","Giun","Ina","Jaden","Bea","Fatma"};
    char sorted_arr[10][10] = {0};
    char a, b, temp[10];

    for (int i = 0; i < 10; i++)
        strcpy(sorted_arr[i], chararr[i]);

    printf("Original Array : \n");

    for (int i = 0; i < 10; i++)
        printf("%s\t", chararr[i]);

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            a = sorted_arr[i][0];
            b = sorted_arr[j][0];

            if (a > b)
            {
                strcpy(temp, sorted_arr[i]);
                strcpy(sorted_arr[i], sorted_arr[j]);
                strcpy(sorted_arr[j], temp);
            }
        }
    }

    printf("Sorted Array : \n");

    for (int i = 0; i < 10; i++)
        printf("%s\t", sorted_arr[i]);

    printf("\n");
}

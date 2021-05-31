#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int binarySearch(char *Array1D[10], int left, int right, char *lookup)
{
    if (left <= right)
    {
        int mid = (right + left) / 2;
        printf("left = %d, mid = %d, right = %d\n", left, mid, right);

        if (strcmp(Array1D[mid], lookup) == 0)
            return mid;

        if (strcmp(Array1D[mid], lookup) > 0)
            return binarySearch(Array1D, left, mid - 1, lookup);

        return binarySearch(Array1D, mid + 1, right, lookup);
    }

    return -1;
}

int main()
{
    char lookup[100];
    char *Array1D[10] = {"Alia", "Bea", "Che", "Derick", "Elena", "Fatma", "Giun", "Henry", "Ina", "Jaden"};

    for (int i = 0; i < 10; i++)
        printf("\"%s\",", Array1D[i]);

    printf("\n\n");

    printf("Please input a name to be searched by the binary search algorithm.\n");
    fgets(lookup, 100, stdin);
    printf("\n");

    binarySearch(Array1D, 0, 9, lookup);

    printf("\n");
}

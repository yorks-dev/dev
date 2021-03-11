#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3};
    double darr[] = {1.0, 2.0, 3.0};
    char carr[] = {'1', '2', '3'};

    printf("Address of the integer array: %p\n", arr);
    printf("Address of the first element    : %p\n", arr + 0);
    printf("Address of the second element   : %p\n", arr + 1);
    printf("Address of the third element    : %p\n", arr + 2);
    printf("Address of the int array is the same as the address of the first element: %p\n\n", arr);

    printf("Address of the  double array: %p\n", darr);
    printf("Address of the first element    : %p\n", darr + 0);
    printf("Address of the second element   : %p\n", darr + 1);
    printf("Address of the third element    : %p\n", darr + 2);
    printf("Address of the double array is the same as the address of the first element: %p\n\n", darr);

    printf("Address of the  char array: %p\n", arr);
    printf("Address of the first element    : %p\n", carr + 0);
    printf("Address of the second element   : %p\n", carr + 1);
    printf("Address of the third element    : %p\n", carr + 2);
    printf("Address of the char array is the same as the address of the first element: %p\n\n", carr);

}

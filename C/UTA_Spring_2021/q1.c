#include <stdio.h>
#include <string.h>

void swapCallByValue(int x1, int x2)
{
    int temp = x1;
    x1 = x2;
    x2 = temp;
}

void swapCallByReference(int *x1, int *x2)
{
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}

int main()
{
    int x1, x2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &x1, &x2);

    printf("Originally:                 x1 = %d\tx2 = %d\n", x1, x2);
    swapCallByValue(x1, x2);
    printf("After swapCallByValue:      x1 = %d\tx2 = %d\n", x1, x2);
    printf("\n");
    printf("Originally:                 x1 = %d\tx2 = %d\n", x1, x2);
    swapCallByReference(&x1, &x2);
    printf("After swapCallByReference:  x1 = %d\tx2 = %d\n", x1, x2);

}

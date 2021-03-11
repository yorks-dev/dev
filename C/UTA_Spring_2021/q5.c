#include <stdio.h>

int sum_digits(int num1)
{
    int sum = 0, temp = 0;
    while (num1 > 0)
    {
        temp = num1 % 10;
        sum = sum + temp;
        num1 = num1 / 10;
    }
    return sum;
}

int sum_digits_recursion(int num1)
{
    if (num1){
        int n = sum_digits_recursion(num1 / 10) + (num1 % 10);
        return n;
    }
    else
        return 0;
}


int main()
{
    int num1;
    
    printf("Input an integer to find the sum of its digits.\n");
    scanf("%d", &num1);
    printf("Sum of the digits of the number %d is %d.\n", num1, sum_digits(num1));
    printf("Sum of the digits of the number %d via recursive function is %d.\n", num1, sum_digits_recursion(num1));

    return 0;
}

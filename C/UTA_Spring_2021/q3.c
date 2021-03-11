#include <stdio.h>

int rev_digits(int num1)
{
    int reverse = 0, temp = 0, difference = 0;
    int num1_copy = num1;

    while (num1 > 0)
    {
        temp = num1 % 10;
        reverse = reverse * 10 + temp;
        num1 = num1 / 10;
    }

    difference = num1_copy - reverse;
    printf("The diffrence between the original number %d and the reversed number %d is %d \n", num1_copy, reverse, difference);
    return 0;
}

int main()
{
    int num1;
    printf("Input an integer to be reversed.\n");
    scanf("%d", &num1);
    rev_digits(num1);

}

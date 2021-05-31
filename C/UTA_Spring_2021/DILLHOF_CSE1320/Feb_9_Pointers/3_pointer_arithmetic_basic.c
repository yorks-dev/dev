#include <stdio.h>

int main()
{
  int somenumbers[5];
  int *ptr = somenumbers; //same as &somenumbers[0].
// Array name is a pointer to itself (the memory address of first index)

  int var = 2;

  for (; ptr < &somenumbers[5]; ptr++)
  {
    *ptr = var;
    var *= 2;
  }

  for (ptr = somenumbers; ptr < &somenumbers[5]; ptr++)
  {
    printf("%d ", *ptr);
  }

  printf("\n------------\n");

  int x = 10;
  int* x_ptr = &x;

  printf("%p\n", x_ptr);
  x_ptr += 4; // increament the address stored at x_ptr by 1 int
  printf("%p\n", x_ptr); 

  int y = 1000;
  int* y_ptr = &y;
  printf("%p\n", y_ptr); 

  printf("y_ptr - x_ptr = %ld\n", (x_ptr - y_ptr) * sizeof(*y_ptr));




}
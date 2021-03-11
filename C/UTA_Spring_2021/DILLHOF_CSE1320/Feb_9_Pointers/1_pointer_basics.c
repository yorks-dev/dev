/*
1. Addressing
----------
Programs keep track of memory by addressing system.
> Byte Addressable
> Word Addressable
* ARM supports bype, halfword, Word data types.

# & means address of.

NOTE -> Every Address is 8 bits

*/

#include <stdio.h>

int main()
{
    int a = 0;
    printf("address of a : %p\n", &a);

// IN C EVERYTHING IS A VALUE - POINTERS, VARIABLES, EVERYTHING

    int * a_ptr = &a;
    printf("content at a_ptr is %p\n", a_ptr);
    printf("address of a_ptr is %p\n", &a_ptr);
    printf("content at *a_ptr is %d\n", *a_ptr);

/*  a_ptr is a pointer to an int.
    here we assign the address of a to a pointer to an int.
*/
// So a pointer basically holds the address of another variable or address or anything.

/* SUMMERY
a_ptr -> address of the int the pointer is pointing to.
&a_ptr -> address of the pointer itself.
*a_ptr -> whats at the address the a_ptr pointes to. (Dereferenve).
*/

    int *another_ptr = (int *) 10;
// printf("value at *another_ptr is %d\n", *another_ptr);
// -> This is not allowed as the OS stops us from accessing address 10. segmentation fault (core dumped)

    *a_ptr = 1;  
// Changed the value at a_ptr to 1
    printf("content at *a_ptr is %d\n", *a_ptr);


}
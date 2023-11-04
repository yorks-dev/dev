#include <stdio.h>

void *my_memcpy(void *dest, void *src, int byte_count){

    // Convert void * to char *
    char *s = src, *d = dest;

    // Dereference and copy the function
    while(byte_count-- != 0){
        *(d++) = *(s++);
    }

    // Most of these functions return the destination, just in case 
    // that's useful to the caller.
    return dest;
}


# Chapter 2 : Hello World!  


``` c
#include <stdio.h>   <- Tells c Pre-Processor to pull file from stdio.h to this file.
int main(){   
    printf("Hello World");
}
```

After the c pre-processor is done, it sends the files for **compilation**. Which generates machine code or an executable.

> C is generally a compiled language. (depending on the interpreper)

------------------------------------------------------------
# Chapter 3 : Variables and Scope

Data is stored in like an array. Thus each byte of data can be referenced by its **index**. 
> This **index** is also called as the ***address***, ***location*** or the ***pointer***.

Uninitialized variables have indeterminate value. *You should initialize* before use to be safe.
> string : char * var (read it as **pointer to a char**)

There is no exponentiation. You’ll have to use one of the pow() function variants from math.h

**sizeof** tells you the **size in bytes** of a data type. *The return type of sizeof is size_t*. size_t stores an unsigned integer in it. **%zu is the format specifier for type size_t**

____________________________________________________________
# Chapter 4 :  Functions

Let no fancy-schmancy name will distract you from the fact that EVERYTHING you pass to a function WITH-OUT EXCEPTION is copied into its corresponding parameter, and the function operates on that local copy, NO MATTER WHAT. Remember that, even when we’re talking about this so-called passing by reference. **In case of pointers being passed, the address is copied into the pointer variable rather than the data itself.**

____________________________________________________________
# Chapter 5 : Pointers

>  A pointer is a variable that holds an address. And a pointer variable holds that address number. Just like a float variable might hold 3.14159. 

We use the address-of-operator **&** to get the address of the data. **%p** is the format specifier of a pointer.

We can use the original variable by deferencing the pointer that holds the address of the variable.
```c
char ch = 'a';
char *ptr_ch = &ch;   -> ptr_ch holds address of ch
char ch_copy = *ptr_ch;  -> we dereference the ptr_ch to use the ch variable and store it in ch_copy.
```

####<u>**Passing Pointers as Arguments (Idea)**</u>

This is like writing a home address on a piece of paper and then copying that piece of paper onto another piece of paper. Now that other piece of paper has the same home address. The person reading the copied piece of paper can follow the home address and reach the house. 

Lets look at this code :
```c
int i = 0;
scanf("%d", &i);  

printf("%d\n", i);
```
> scanf takes the address of i and dereferences it to modify the valud of i to the input that we gave.

____________________________________________________________
# Chapter 6 : Arrays

Getting length of arrays : c has no inbuilt function.
```c
int arr[5];
int sizeof_arr = sizeof arr / sizeof(int);
 ```
**This does not work when array is passed to a function**  because when passed in a fuction we only pass a pointer to the array and not the whole array. Thus sizeof will only print the size of the pointer.
> Pointer to an array points to the first element of that array. BUT a pointer to an array and a pointer to the first element of an array have different types. We can burn that bridge when we get to it.

```c
void times2(int *a, int len)  <- *a is same as a[] or a[5]
```
#### Passing Multidimensional Arrays to Functions

The compiler needs **all the dimension except the first** one so it can figure out how far in memory to skip for each increment of the first dimension.
```c
void print_2D_array(int a[][3]);  // OR
void print_2D_array(int (*a)[3]);
```

____________________________________________________________
# Chapter 7 : Strings

```c
char *s = "Hello Ayush\n"; or  <--- String Literal
char s_alt[] = "Hello, Ayush!";  <--- Array
```
The variable ``s`` is basically a **"pointer to char"**. *pointing to the first character* of the string literal/Array "Hello Ayush\n".  
```c
printf("%c\n", *s);   <- this prints out 'H'
printf("%c\n", *s_alt);   <- also prints out 'H'
```

> **NOTE** : If you have a pointer to a string literal, don’t try to change it (un-mutatable). And if you use a string in double quotes to initialize an array, that’s not actually a string literal. You can mutate it.

``strlen()`` - length of string. Must include ``#include <string.h>``

``"Dog\n"`` is basically ``[D] [o] [g] [\n] [\0]``. ``\0`` is the zero-valued byte, which is the terminating character in the string.

> NOTE - scanf does not work with char * without alocating memory
___________________________________________________________
# Chapter 8 : Structs

```c
struct car { char *name;
float price;
int speed; };
```
When you are making a struct car, you are making a new type. Which is ``struct car``, and not just car.
There aren’t any variables of that type yet, but we can declare some:
```c
struct car saturn; // Variable "saturn" of type "struct car"
saturn = {.speed=175, .name="Saturn SL/2"};
```
**The struct is somewhat large and it’s more expensive to copy that onto the stack than it is to *just pass a pointer to struct.***

```c
set_price(&saturn, 799.99);  <- pass the address with the & operator.
```

The set_price function will look like :
```c
void set_price(struct car *car_name, double new_price){
    (*car_name).price = new_price;  // OR
    car_name->price = new_price; 
};
```
Dereferencing the car_name pointer (struct pointer) gives us access to the original struct, then we can use the dot operator to access its variables ***or*** we can just use the **arrow operator** to directly access the variables.

-----------------------------------------------------------
# Chapter 9 : File Input/Output

When ever we work with FileIO, we do it through a piece of data that is in the form of ``FILE *`` type. It holds info on which file we using, where in the file we are and so on.
> ***These are refered to as streams. i.e stream of data from a file or from any source. There are other ways to stream data into a program than just reading from a file.***

``stdin``, ``stdout``, ``stderr`` are three streams already open for us.

`fprintf` can write to the screen and also to any file.

```c
fprintf(stdout, "Hello, world!\n"); // printf to a file
```

#### Reading Text Files

Text files are logically a sequence of lines seperated by newline characters.

- `fopen()` opens a stream and fp points to that stream.
- `fopen()` will return NULL if something goes wrong, like file-not-found.
- `fgetc()` reads a character at a time.

```c
FILE *fp = fopen("hello.txt", "r"); 
int just_a_character = fgetc(fp);  // Reading just a character.
```

The `FILE*` keeps track of our position in the file. So subsequent calls to fgetc() would get the next character in the file, and then the next, until the end.

**`EOF` is the End of File Character, whose value is out of the bounds of a character, thus use `int` when comparing with `EOF` while looking for the end of file.**

- `fgets(where_to_store_line, MAX_BUFFER, file_ptr)` reads a line at a time, and terminates it with a '\0' zero-byte character.
- `fscanf(file_ptr, "%s %d %d ...", string, &int, &int, ...)` reads formatted output from a line and returns EOF at end of file.

####  Writing Text Files

We can use `fputc()`, `fputs()`, and `fprintf()` to write text streams .

```c
FILE *fp; int x = 32;
fp = fopen("output.txt", "w");
fputc('B', fp);
fputc('\n', fp); // newline 
fprintf(fp, "x = %d\n", x); 
fputs("Hello, world!\n", fp);
```

#### Working with Binary 

// TODO
// TODO

------------------------------------------------------------
# Chapter 10 : Typedef - Making New Types

 Basically, you take an existing type and you make an **alias** for it with typedef.

*Usually we define typedef **globally**.*

##### struct and typedef
```c
typedef struct animal { 
    char *name;
    int leg_count, speed; 
}Animal;  // 'struct animal' aliased to just 'animal'
animal lion = {.name = "lion", .leg_count = 4, .speed = 50};
```
Struct does not need a name always.

```c
typedef struct { 
    int x, y;
}Point;

Point p = {.x = 5, .y = 5};
```

##### Complete struct and typedef program
```c
#include <stdio.h>

typedef struct {
    char *name;
    int age, roll;
}Student;

void change_name(Student *Student, char *new_name){
    Student->name = new_name; 
}

void change_roll(Student *Student, int roll){
    (*Student).roll = roll;
}

int main(){

    Student student1 = {.name = "Ayush", .age=20, .roll = 1};

    printf("Name : %s, Age : %d, Roll : %d\n", student1.name, student1.age, student1.roll);
    change_name(&student1, "Ayush Dutta");
    printf("Name : %s, Age : %d, Roll : %d\n", student1.name, student1.age, student1.roll);
    change_roll(&student1, 10);
    printf("Name : %s, Age : %d, Roll : %d\n", student1.name, student1.age, student1.roll);

}
``` 

------------------------------------------------------------

# Chapter 11 : Pointer Arithmetic

Lets say a number 400 is stored at index 22,567,290, and another number 401 is stored at index  22,567,298 (8 byte higher than previous because an int is 8 bytes long). Thus when we increament a pointer to 400 by sizeof int, it moves the pointer to 401, which is same as increasing the pointer by one.

##### Array/Pointer Equivalence
``a[b] == *(a + b)``   b is the index, a is the pointer.
eg : `ptr[9] = *(ptr + 9)`

#### void Pointer
Sometimes it’s useful to have a pointer to a thing that you don’t know the type of.

memcpy() takes advantage of the fact that if you iterate through char*s, you’re iterating through the bytes of an object no matter what type the object is. 

This function copies n bytes of memory starting from address s1 into the memory starting at address s2.


```c
void *memcpy(void *s1, void *s2, size_t n);
```
1. We could copy a string with memcpy()
```c
char s[] = "Hello Ayush!";
char d[100];
memcpy(d, s, 5);   // Copies Hello
memcpy(d, (s+6), 5); // Copies Ayush

```

2. we can copy some ints:
```c
int s[] = {1, 2, 3, 4, 5};
int d[10];
memcpy(d, s, 3 * sizeof(int)); // copy first 3 int from 5.
memcpy(d, (s+1), 3 * sizeof(int));  // Copies from 2nd element 3 ints.
```

> ***If you have a pointer to a source and a pointer to a destination, and you have the number of bytes you want to copy, you can copy any type of data.***

> **You have to convert `void *` to another type before you can use it.**

```c
char a = 'X'; // A single char
void *p = &a; //p points to the 'X'
char *q = p; // q also points to the 'X' (BUT CAN USE NOW)
```

Let’s write our own memcpy() to try this out. We can copy bytes (chars), and we know the number of bytes because it’s passed in.

```c
void *my_memcpy(void *dest, void *src, int byte_count) {
    
    // Convert void*s to char*s
    char *s = src, *d = dest;
    
    // Now that we have char*s, we can dereference and copy them
    while (byte_count--) { 
        *d++ = *s++;
    }
    // Most of these functions return the destination, just in case // that's useful to the caller.
    return dest;   // void * return cause we dont know type beforehand.
}
```

#### Quick Sort

// TODO
// TODO
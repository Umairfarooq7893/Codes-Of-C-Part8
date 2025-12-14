/*  Author  : Umair Farooq
    Program : Dynamic Memory Allocation

Dynamic memory allocation allows us to allocate memory 
at runtime using functions from <stdlib.h>.

In normal arrays (static allocation):
int arr[5];
Memory size is fixed at compile time.

But with dynamic memory allocation, we can allocate memory at runtime, using:
malloc()	Allocates single block of memory
            Memory not initialized (garbage values stored initially)

calloc()	Allocates multiple blocks of memory	
            Memory initialized to 0

realloc()	Resizes previously allocated memory	
            Keeps old data intact

free()	    Releases allocated memory
            Prevents memory leaks
*/

/*
   calloc , allocates memory for an array of elements 
   and initialize all bytes to zero.
   
   malloc allocates a specified number of bytes
   of uninitialized memory.
   
   When used with n * sizeof(type), 
   it becomes memory for an array of n elements.**
*/

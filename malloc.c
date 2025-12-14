/*
        Name:    Umair Farooq
        Program: malloc Function
*/

#include <stdio.h>
#include <stdlib.h> // For malloc(), calloc(), realloc(), free()

int main() {
    int n = 5;
// Reserves a block of memory (of size what we needed) 
// returns a pointer of type void
// This pointer behaves just like an array
// Hence, The return pointer can be type-casted to any poiner type (like Int,Float)

// Syntax:
// type *ptr;   // where type = int , float , char etc
// ptr = (type*) malloc(byte_size_needed)  

// Allocate memory using malloc()
    int *ptr;      // defining a pointer of integer type
    ptr = (int*) malloc(n * sizeof(int));
        /*type casting it to integer
          & providing size according to what we need 
          like ,here we needed for n = 5 integers*/
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
    }else{
    printf("\nMemory allocated using malloc()\n");
    
// Taking Input from User
// It will be an Array
//And ptr[] defined

    printf("Enter the Required Elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);
    // or we can directly give
    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9

    // Displaying Elements
    printf("Elements entered:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    // Free allocated memory
    free(ptr);
    } // Else closes here

return 0;
}
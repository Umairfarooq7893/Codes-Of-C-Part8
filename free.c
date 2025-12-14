 /*  Author  : Umair Farooq
    Program : Dynamic Memory Allocation using calloc() and free()
    
calloc() — Allocates multiple blocks of memory (initialized to 0)
free()   — Deallocates (releases) previously allocated memory
*/

#include <stdio.h>
#include <stdlib.h> // For malloc(), calloc(), realloc(), free()

int main() {
    int *ptr, n = 5, i;

    /* calloc() — allocate memory for n integers
       Syntax: calloc(number_of_blocks, size_of_each_block)
       It automatically initializes all bytes to zero. */
    ptr = (int*) calloc(n, sizeof(int));
    // since it returns void pointer, we type cast it to integer pointer

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;  // exit if allocation fails
    }

    // Initialized to zero
    printf("\nMemory allocated using calloc().\n");
    printf("Default initialized values:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);  // prints 0 0 0 0 0
    }

    // Assign new values
    printf("\n\nEnter %d integer values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);  //FIXED — must pass the address
    }

    // Display new values
    printf("\nAfter assigning new values:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Release allocated memory
    free(ptr);
    printf("\n\nMemory successfully freed!\n");

    return 0;
}


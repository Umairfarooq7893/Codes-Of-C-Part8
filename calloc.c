/*  Author  : Umair Farooq
    Program : Dynamic Memory Allocation using calloc()
    
calloc() — Allocates multiple blocks of memory for an Array
Each block is initialized to 0 by default.
*/

#include <stdio.h>
#include <stdlib.h> // For malloc(), calloc(), realloc(), free()

int main() {
    int *ptr, n = 5;
    /* Syntax: calloc(number_of_blocks, size_of_each_block) */

    ptr = (int*) calloc(n, sizeof(int));
    // since it returns void pointer , we are type casting it to integer

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
    }else{
    printf("\nMemory allocated using calloc().\n");
    printf("Default initialized values:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);  // will print 0 0 0 0 0

    // Assign new values
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    // or use 
    // for(int i=0; i<n; i++);
    // scanf("%d",&ptr[i]);

    printf("\n\nAfter assigning new values:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);
    
    // Free the Allocated Memory
    free(ptr);
    }

    return 0;
}

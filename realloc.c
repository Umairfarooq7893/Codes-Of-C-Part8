/* 
    Author  : Umair Farooq
    Program : Dynamic Memory Allocation using realloc()
    
realloc() — Resizes memory
It preserves the existing data
And can increase or decrease the size dynamically.
*/

#include <stdio.h>
#include <stdlib.h> // For malloc(), calloc(), realloc(), free()

int main() {
    int n = 5;
    int new_n;

// Step 1: Allocate memory using malloc()
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }else{
    printf("Memory allocated for %d integers.\n", n);
    }
// Step 2: Input initial values
    printf("Enter %d integer values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

// Step 3: Display entered values
    printf("\nValues before realloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

// Step 4: Ask user for new size
    printf("\n\nEnter new size of array: ");
    scanf("%d", &new_n);

// Step 5: Reallocate memory using realloc()
    ptr = (int*) realloc(ptr, new_n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
    }else{
    printf("Memory successfully reallocated to hold %d integers.\n", new_n);

// Step 6: If new size is larger, input extra elements
    if (new_n > n) {
        printf("Enter %d more values:\n", (new_n - n));
        for (int i = n; i < new_n; i++) {
            scanf("%d", &ptr[i]);
        }
    }
// Step 7: Display all values after realloc
    printf("\nValues after realloc:\n");
    for (int i = 0; i < new_n; i++) {
        printf("%d ", ptr[i]);
    }

// Step 8: Free allocated memory
    free(ptr);
    printf("\n\nMemory successfully freed!\n");
    }
    return 0;
}

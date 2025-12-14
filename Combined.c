#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    /* ----- malloc ----- */
    p = (int *)malloc(3 * sizeof(int));
    if (p == NULL) { printf("Malloc failed\n");
        return 0;
    } 
    for (int i = 0; i < 3; i++)
        p[i] = i + 1;      // assign values

    for(int i =0 ;i < 3; i ++){
        printf("%d ",p[i]);
    }
    printf("\n");

    free(p);

    /* ----- calloc ----- */
    p = (int *)calloc(3, sizeof(int));   // all values = 0
    if (p == NULL) { printf("Calloc failed\n");
        return 0;
    }
      for(int i =0 ;i < 3; i ++){
        printf("%d ",p[i]);
    }
    printf("\n");

    /* ----- realloc ----- */
    p = (int *)realloc(p, 5 * sizeof(int));   // increase size
    if (p == NULL) { printf("Realloc failed\n"); return 0; }

    p[3] = 4; 
    p[4] = 5;

    /* ----- Display ----- */
    printf("Values: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    /* ----- free ----- */
    free(p);

    return 0;
}
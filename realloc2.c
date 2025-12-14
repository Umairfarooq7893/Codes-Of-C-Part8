/*  Author  : Umair Farooq
    Program : 
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = (int*)malloc(3 * sizeof(int));
    if (arr == NULL){
    printf("Memory mot allocated");
    }else{
    for (int i = 0; i < 3; i++)
        arr[i] = i + 1;

    // Increase size to 5
    arr =(int*)realloc(arr, 5 * sizeof(int));
    arr[3] = 4;
    arr[4] = 5;
    // Displaying
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr);
    }
    return 0;
}

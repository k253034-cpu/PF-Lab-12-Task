#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    // calloc
    arr = (int*)calloc(5, sizeof(int));
    printf("Values after calloc (initialized to 0):\n");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    // modify
    for(i = 0; i < 5; i++)
        arr[i] = i + 1;

    printf("\nValues after modification:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr);

    // reuse pointer
    arr = (int*)malloc(5 * sizeof(int));
    printf("\nNew array after malloc (garbage values):\n");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}

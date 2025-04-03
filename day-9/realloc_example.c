// realloc resizes previously allocated memory.

// Old values are retained, but new memory is uninitialized.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5, new_n = 10;

    // Allocate memory using malloc
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Resize memory using realloc
    arr = (int*)realloc(arr, new_n * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Print old and new values
    for (int i = 0; i < new_n; i++) {
        printf("%d ", arr[i]); // New values are uninitialized
    }

    // Free allocated memory
    free(arr);

    return 0;
}

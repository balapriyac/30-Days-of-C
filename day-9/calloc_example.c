// calloc(n, sizeof(int)) allocates memory for n integers and initializes them to 0.

// It’s safer than malloc if you need zero-initialized memory.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocate memory for 5 integers using calloc
    arr = (int*)calloc(n, sizeof(int));

    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print values (calloc initializes to 0)
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}

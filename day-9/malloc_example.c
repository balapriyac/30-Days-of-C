// malloc(n * sizeof(int)) allocates memory for n integers.

// Returns a pointer to the allocated memory, which must be typecasted.

// free(arr) releases the allocated memory.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    // Allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Free allocated memory
    free(arr);
    
    return 0;
}


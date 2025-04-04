#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2;
    }

    // Free memory
    free(ptr);
    ptr = NULL;  // Avoid dangling pointer

    return 0;
}

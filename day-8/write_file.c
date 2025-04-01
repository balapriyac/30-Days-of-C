#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Hello, File Handling in C!\n");
    fclose(file);
    printf("Data written successfully.\n");
    return 0;
}

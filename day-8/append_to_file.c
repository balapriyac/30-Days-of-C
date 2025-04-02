#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Appending this line!\n");
    fclose(file);
    printf("Data appended successfully.\n");
    return 0;
}

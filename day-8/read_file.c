#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, 100, file) != NULL) {
        printf("Read: %s", buffer);
    }
    fclose(file);
    return 0;
}

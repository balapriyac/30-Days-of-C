#include <stdio.h>

struct Data {
    int id;
    char name[20];
};

int main() {
    struct Data d1 = {1, "Sample"};
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&d1, sizeof(struct Data), 1, file);
    fclose(file);
    printf("Binary data written successfully.\n");
    return 0;
}


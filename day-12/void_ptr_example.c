#include <stdio.h>

void printValue(void *ptr, char type) {
    switch (type) {
        case 'i':
            printf("Integer: %d\n", *(int *)ptr);
            break;
        case 'f':
            printf("Float: %.2f\n", *(float *)ptr);
            break;
        case 'c':
            printf("Char: %c\n", *(char *)ptr);
            break;
        default:
            printf("Unknown type\n");
    }
}

int main() {
    int a = 42;
    float b = 3.14f;
    char c = 'Z';

    printValue(&a, 'i');
    printValue(&b, 'f');
    printValue(&c, 'c');

    return 0;
}

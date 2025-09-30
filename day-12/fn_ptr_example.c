#include <stdio.h>

void greet() {
    printf("Hello from function pointer!\n");
}

int main() {
    void (*fp)() = greet;
    fp();  // Call function via pointer

    return 0;
}

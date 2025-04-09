#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("Value of a: %d\n", a);
    printf("Value via *p: %d\n", *p);
    printf("Value via **pp: %d\n", **pp);

    printf("Address of a: %p\n", &a);
    printf("Address stored in p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Address stored in pp: %p\n", pp);

    return 0;
}

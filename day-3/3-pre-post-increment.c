#include <stdio.h>

void pre_and_post_inc() 
{
    int num1, num2;

    num1 = 10;
    num2 = num1++; // num2 = 10, num1 = 11
    printf("\nnum2 = num1++; so num2 = %d and num1 = %d", num2, num1);

    num1 = 10;
    num2 = ++num1; // num2 = 11, num1 = 11
    printf("\nnum2 = ++num1; so num2 = %d and num1 = %d", num2, num1);
}

int main()
{
    pre_and_post_inc();
    return 0;
}

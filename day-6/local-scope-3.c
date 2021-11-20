#include <stdio.h>

int main()
{
    int my_num = 7;
    printf("%d",my_num);
    my_func();
    return 0;
}

void my_func()
{
    printf("%d",my_num);
}

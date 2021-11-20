#include <stdio.h>
int my_num = 7;

int main()
{
    printf("my_num can be accessed from main() and its value is %d\n",my_num);
    //call my_func
    my_func();
    return 0;
}

void my_func()
{
  printf("my_num can be accessed from my_func() as well and its value is %d\n",my_num);
}

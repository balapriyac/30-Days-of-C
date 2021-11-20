#include <stdio.h>
#include <ctype.h>

int main()
{
    char my_str[] = "CODING";
    int i;
    for(i=0; my_str[i]!='\0'; i++);
    printf("Length of string: %d",i);
    return 0;
}

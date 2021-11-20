#include <stdio.h>
#include <ctype.h>

int main()
{
    char my_str[] = "CODING36";
    int i;
    for(i=0;my_str[i]!='\0';i++)
    {
        if(isalpha(my_str[i]))
            my_str[i] += 32;
    }
    printf("Result: %s",my_str);
    return 0;
}

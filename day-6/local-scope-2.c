#include <stdio.h>

int main() 
{
    int my_num = 7;
    {
        int new_num = 10;
    } 
    printf("new_num is %d",new_num); //this is line 9; new_num can't be accessed here
    return 0;
}



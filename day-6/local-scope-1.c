#include <stdio.h>

int main() 
{
    int my_num = 7;
    {
        //add 10 my_num
        my_num = my_num +10;
        //or my_num +=10 - more succinctly
        printf("my_num is %d",my_num);
    }
    
    return 0;
}


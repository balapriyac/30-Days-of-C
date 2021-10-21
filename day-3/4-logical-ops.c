#include <stdio.h>

int main() 
{
    int hours; //num_hrs per week
    int years; //num_years of experience
    int num_lang; //num_langauges known

    hours = 40;
    years = 2;
    num_lang = 4;


    if ((hours >= 40) && (years >= 2) && (num_lang > 3)) 
    {
      printf("Be sure to have a healthy work-life balance\n");
    } 
    else 
    {
      printf("Hope you're enjoying your work!\n");
    }

    return 0;
}

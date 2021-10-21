#include <stdio.h>
#define TAXRATE 0.175

int main() 
{

    const double TAXRATE_CONST = 0.175;
    double sub_total;
    double tax;
    double grand_total;
    double tax_rate;


    tax_rate = 0.175;
    sub_total = 200;
    tax_rate = 0.2;					// reassign value to a variable - allowed

    tax = sub_total * tax_rate;
    grand_total = sub_total + tax;

    printf("Using #define constant:\n");
    printf("(tax_rate is %.3f) The tax on %.2f is %.2f, so the grand total is %.2f.\n", tax_rate, sub_total, tax, grand_total);

    printf("Using a variable:\n");
    printf("(TAXRATE is %.3f) The tax on %.2f is %.2f, so the grand total is %.2f.\n", TAXRATE, sub_total, tax, grand_total);


    #define TAXRATE 0.2		// redefine a #define 'constant'
    tax = sub_total * TAXRATE;
    grand_total = sub_total + tax;

    printf("Using re-defined #define constant:\n");
    printf("(TAXRATE is %.3f) The tax on %.2f is %.2f, so the grand total is %.2f.\n", TAXRATE, sub_total, tax, grand_total);



    // TAXRATE_CONST = 0.2;			// cannot redefine a true constant! [Not allowed]
    tax = sub_total * TAXRATE_CONST;
    grand_total = sub_total + tax;

    printf("Using const keyword:\n");
    printf("(TAXRATE_CONST is %.3f) The tax on %.2f is %.2f, so the grand total is %.2f.\n", TAXRATE_CONST, sub_total, tax, grand_total);

    return 0;
}


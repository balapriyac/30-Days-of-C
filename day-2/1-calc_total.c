#include <stdio.h>

int main() 
{
	double sub_total;
	double tax;
	double grand_total;
	double tax_rate;

	tax_rate = 0.25;
	sub_total = 250;
	tax = sub_total * tax_rate;
	grand_total = sub_total + tax;

	printf("The tax on %.2f is %.2f, so the grand total is %.2f.\n", sub_total, tax, grand_total);
	return 0;
}


#include <stdio.h>

void sayHello() 
{
	printf("Hello\n");
}

void greet(char my_name[]) 
{
	printf("Hello %s\n", my_name);
}

int add(int num1, int num2) 
{
	int num3;
	num3 = num1 + num2;
	return num3;
}


int main() 
{
	double result;
	int n1;
	int n2;
	int total;

	n1 = 10;
	n2 = 30;

	sayHello();
	greet("Bala!");

	total = add(n1, n2);
	printf("%d + %d = %d\n", n1, n2, total);
	
	return 0;
}


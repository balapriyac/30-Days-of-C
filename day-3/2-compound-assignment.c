#include <stdio.h>

int main() 
{

	int a = 10;
	int b = 5;


	printf("\nExamples of compound assignment operators:\n");
	a = a + b;
	printf("\na + b  : %d\n", a);

	a += b;
	printf("a += b  : %d\n", a);

	a = a - b;
	printf("a - b  : %d\n", a);

	a -= b;
	printf("a -= b  : %d\n", a);

	a = a * b;
	printf("a * b  : %d\n", a);

	a *= b;
	printf("a *= b  : %d\n", a);

	a = a / b;
	printf("a/b  : %d\n", a);

	a /= b;
	printf("a /= b  : %d\n", a);
  
	a = 10;
	a++;
	printf("a++ : %d\n", a);
  
	a = 10;
	a--;
	printf("a-- : %d\n", a);


	return(0);
}


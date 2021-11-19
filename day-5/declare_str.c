#include <stdio.h>

int main() {
	char str1[] = "Hello";
	char *str2 = "Bye";
	printf("%d %d %s\n", &str1, str1, str1);
	printf("%d %d %s\n", &str2, str2, str2);
	return 0;
}

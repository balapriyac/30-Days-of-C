#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "Hello";
	char *str2 = "Hello";
	char str3[6];
	
	str3[0] = 'H';
	str3[1] = 'e';
	str3[2] = 'l';
	str3[3] = 'l';
	str3[4] = 'o';
	str3[5] = '\0';
	
	printf("%d %s\n", str1, str1);
	printf("%d %s\n", str2, str2);
	printf("%d %s\n", str3, str3);
	
	printf("%d, %d, %d, %d, %d\n", &str3[0], &str3[1], &str3[2], &str3[3], &str3[4]);
	printf("%d, %d, %d, %d, %d\n", str3, str3+1, str3+2, str3+3, str3+4);
	
	str2 = "Goodbye";
	printf("%s", str2);
	
	
	
	return 0;
}


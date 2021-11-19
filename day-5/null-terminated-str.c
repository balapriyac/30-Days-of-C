#include <stdio.h>

char str1[] = "Hello"; //'\0' is auto-appended
char str2[] = "Hello\0 world"; //'\0' terminates the string

void showstring(char *str) {
	int i;
	int len = strlen(str);
	printf("Length of %s is %d.\n", str, len);
	for (i = 0; i <= len; i++) {
		if (str[i] == '\0') {
			printf("char[%d] = NULL\n", i);
		} else {
			printf("char[%d] = %c\n", i, str[i]);
		}
	}
}

int main() {
	showstring(str1);
	showstring(str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
	return 0;
}

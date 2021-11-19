#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define STRLEN 100

char greet[STRLEN];

char * string_function_dynamic(char *astring) {
	char *s;
	s = (char*)malloc(STRLEN);	
	s[0] = 0;						// need this to initialize the buffer created by malloc
	strcat(s, "hello ");
	
	strcat(s, astring);
	strcat(s, "\n");
	return s;
}

char * string_function(char astring[]) {
	strcat(greet, "hello ");
	strcat(greet, astring);
	strcat(greet, "\n");
	return greet;
}

int main() {
	printf(string_function("World!"));
	printf(string_function_dynamic("Coding!"));
	return 0;
}


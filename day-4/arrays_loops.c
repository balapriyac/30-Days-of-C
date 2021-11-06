#include <stdio.h>

int array1[5];



int main() {
	int i;
	for (i = 0; i < 5; i++) {
		array1[i] = i + 1; 
	}

	printf("--- for loop ---\n");
	for (i = 0; i < 5; i++) {
		printf("%d\n", array1[i]);
	}

	printf("--- while loop ---\n");
	i = 0;
	while (i < 5) {
		printf("%d\n", array1[i]);
		i++;
	}

	printf("--- do..while loop ---\n");
	i = 0;
	do {
		printf("%d\n", array1[i]);
		i++;
	} while (i < 5);

	printf("--- while loop (i = 5) ---\n");
	i = 5;
	while (i < 5) {
		printf("%d\n", intarray[i]);
		i++;
	}

	printf("--- do..while loop (i = 5) ---\n");
	i = 5;
	do {
		printf("%d\n", intarray[i]);
		i++;
	} while (i < 5);
	return 0;
}


#include <stdio.h>

/* This program displays all arguments 
that are passed to it */

int main(int argc, char **argv) //int main(int argc, char *argv[]) would work fine too
{ 
	int i;
	for (i = 0; i < argc; i++) 
  {
		printf("argc = %d arg %d is %s\n", argc, i, argv[i]);	// prints arg at index i
	}
	return 0;
}

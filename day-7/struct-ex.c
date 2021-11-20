#include <stdio.h>
#include <string.h>

#define NUMBER_OF_BOOKS 2

struct book {
	char name[50];
	char author[50];
	int rating;
};

struct book book_collection[NUMBER_OF_BOOKS];

void create_book_collection() {
	strcpy(book_collection[0].name, "To the Lighthouse");
	strcpy(book_collection[0].author, "Virginia Woolf");
	book_collection[0].rating = 5;

	strcpy(book_collection[1].name, "The Wind in the Willows");
	strcpy(book_collection[1].author, "Kenneth Grahame");
	book_collection[1].rating = 5;


}

void display_book_collection() {
	int i;
	struct book thisbook;
	for (i = 0; i < NUMBER_OF_BOOKS; i++) {
		thisbook = book_collection[i];
		printf("Book #%d: '%s' by %s. My rating = %d\n", i, thisbook.name, thisbook.author, thisbook.rating);
	}
}

int main() {
	create_book_collection();
	display_book_collection();
	return 0;
}

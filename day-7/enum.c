#include <stdio.h>

enum days {
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};


enum numbers {
    Couple = 2, Dozen = 12, Score = 20
};

void showdaytype(enum days day) {
	if ((day == Saturday) || (day == Sunday)) {
		printf("It's the weekend!\n" );
	} else {
		printf("It's a working day.\n");
	}
}


void buyinbulk(enum numbers num) {
	printf("I want to buy %d items.\n", num);
}


int main() {
	enum days today;
	enum numbers num;
	today = Saturday;
	num = Dozen;
	showdaytype(today);
	buyinbulk(num);
	return 0;
}


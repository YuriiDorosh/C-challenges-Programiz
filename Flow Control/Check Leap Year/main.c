#include <stdio.h>

void checkLeapYear(int year) {
	if (year % 400 == 0) {
		printf("Leap Year");
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		printf("Leap Year");
	}
	else {
		printf("Not a Leap Year");
	}
}


int main() {
	int year;
	scanf("%d", &year);

	checkLeapYear(year);

	return 0;
}
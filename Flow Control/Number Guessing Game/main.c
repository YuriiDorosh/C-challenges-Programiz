#include <stdio.h>
#define CorrectNumber 18

void guessNumber(int n) {
	if (n > CorrectNumber) {
		printf("Wrong, your guess is larger");
	}
	else if (n < CorrectNumber) {
		printf("Wrong, your guess is smaller");
	}
	else {
		printf("Your guess is correct");
	}
}


int main() {
	int guessedNumber;
	scanf("%d", &guessedNumber);
	while (guessedNumber <= 0 || guessedNumber > 100) {
		scanf("%d", &guessedNumber);
	}

	guessNumber(guessedNumber);

	return 0;
}
#include <stdio.h>

void positiveOrNegative(int n) {
	if (n > 0) {
		printf("Positive Number");
	}
	else if (n < 0) {
		printf("Negative Number");
	}
	else {
		printf("Zero Number");
	}
}


int main() {
	int number;
	scanf("%d", &number);

	positiveOrNegative(number);

	return 0;
}
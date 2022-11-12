#include <stdio.h>

void printParallelMeaning(int n) {
	if (n % 3 == 0 && n % 5 == 0) {
		printf("FizzBuzz");
	}
	else if (n % 5 == 0) {
		printf("Buzz");
	}
	else if (n % 3 == 0) {
		printf("Fizz");
	}
	else {
		printf("%d", n);
	}
}


int main() {
	int number;
	scanf("%d", &number);

	printParallelMeaning(number);

	return 0;
}
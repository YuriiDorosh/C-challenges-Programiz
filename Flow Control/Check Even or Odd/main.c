#include <stdio.h>

void evenOrOdd(int n1) {
	if (n1 % 2 == 0) {
		printf("Even");
	}
	else {
		printf("Odd");
	}
}


int main() {
	int number;
	scanf("%d", &number);

	evenOrOdd(number);

	return 0;
}
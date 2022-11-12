#include <stdio.h>

void findFactorial(int n) {
	int factorial = 1;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}
	printf("%d", factorial);
}


int main() {
	int number;
	scanf("%d", &number);

	findFactorial(number);

	return 0;
}
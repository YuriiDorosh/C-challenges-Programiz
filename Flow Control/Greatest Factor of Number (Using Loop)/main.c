#include <stdio.h>

void greatestFactor(int n) {
	for (int i = n / 2; i < n - 1; i++) {
		if (n % i == 0) {
			printf("%d", i);
		}
	}
}


int main() {
	int number;
	scanf("%d", &number);

	greatestFactor(number);

	return 0;
}
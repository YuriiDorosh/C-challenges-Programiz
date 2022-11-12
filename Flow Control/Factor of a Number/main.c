#include <stdio.h>

void factorOfNumber(int n) {
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
		}
	}
}


int main() {
	int number;
	scanf("%d", &number);

	factorOfNumber(number);

	return 0;
}
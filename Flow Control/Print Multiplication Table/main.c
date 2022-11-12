#include <stdio.h>

void multiplicationTable(int n) {
	int count = 1;
	for (int i = 1; i <= 10; i++) {
		count = n * i;
		printf("%d * %d = %d\n", n, i, count);
	}
}


int main() {
	int number;
	scanf("%d", &number);

	multiplicationTable(number);

	return 0;
}
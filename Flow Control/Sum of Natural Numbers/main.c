#include <stdio.h>

void findTheSum(int n) {
	int sum;
	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d", sum);
}


int main() {
	int number;
	scanf("%d", &number);

	findTheSum(number);

	return 0;
}
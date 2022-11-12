#include <stdio.h>

int main() {
	int number;
	int sum = 0;
	
	while (1) {
		scanf("%d", &number);
		if (number == 0) {
			break;
		}
		sum += number;
	}
	printf("%d", sum);

	return 0;
}
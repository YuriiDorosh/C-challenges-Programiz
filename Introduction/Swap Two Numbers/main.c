#include <stdio.h>

void swapTwoNumbers(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("%d\n", n1);
	printf("%d", n2);
}

int main() {
	int x;
	int y;
	scanf("%d", &x);
	scanf("%d", &y);

	swapTwoNumbers(x, y);

	return 0;
}
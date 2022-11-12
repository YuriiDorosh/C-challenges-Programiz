#include <stdio.h>

void calculateTheCube(int len) {
	int cube = len * len * len;
	printf("%d", cube);
}


int main() {
	int length;
	scanf("%d", &length);

	calculateTheCube(length);

	return 0;
}
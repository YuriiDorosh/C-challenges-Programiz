#include <stdio.h>
#define n 10

void skipThree() {
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			continue;
		}
		printf("%d\n", i);
	}
}


int main() {

	skipThree(n);

	return 0;
}
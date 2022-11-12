#include <stdio.h>

void findAreaOfRectangle(int n1, int n2) {
	int area = n1 * n2;
	printf("%d", area);
}


int main() {
	int length;
	int breadth;
	scanf("%d", &length);
	scanf("%d", &breadth);


	findAreaOfRectangle(length, breadth);

	return 0;
}
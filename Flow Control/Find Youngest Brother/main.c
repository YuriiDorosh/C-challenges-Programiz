#include <stdio.h>

void findYoungestBrother(int n1, int n2, int n3) {
	if (n1 < n2 && n1 < n3) {
		printf("Jack");
	}
	else if (n2 < n1 && n2 < n3) {
		printf("Roman");
	}
	else {
		printf("Johnny");
	}
}


int main() {
	int jackAge;
	int romanAge;
	int johnnyAge;
	scanf("%d", &jackAge);
	scanf("%d", &romanAge);
	scanf("%d", &johnnyAge);

	findYoungestBrother(jackAge, romanAge, johnnyAge);

	return 0;
}
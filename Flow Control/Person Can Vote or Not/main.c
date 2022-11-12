#include <stdio.h>

void canVoteOrNot(int age) {
	if (age >= 18) {
		printf("Can Vote");
	}
	else {
		printf("Cannot Vote");
	}
}


int main() {
	int age;
	scanf("%d", &age);

	canVoteOrNot(age);

	return 0;
}
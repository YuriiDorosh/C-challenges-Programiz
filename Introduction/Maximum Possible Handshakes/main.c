#include <stdio.h>

void findCombinationOfHandshakes(int n) {
	int combination = (n * (n - 1)) / 2;
	printf("%d", combination);
}


int main() {
	int students;
	scanf("%d", &students);

	findCombinationOfHandshakes(students);

	return 0;
}
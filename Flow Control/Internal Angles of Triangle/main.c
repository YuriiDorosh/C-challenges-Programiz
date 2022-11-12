#include <stdio.h>
#define SumOfTheAngles 180

void trueOrFalse(int n1, int n2, int n3) {
	int sum;
	sum = 0;
	sum += n1 + n2 + n3;
	if ( sum == SumOfTheAngles) {
		printf("true");
	}
	else {
		printf("false");
	}
}


int main() {
	int angle1;
	scanf("%d", &angle1);
	int angle2;
	scanf("%d", &angle2);
	int angle3;
	scanf("%d", &angle3);
	
	trueOrFalse(angle1, angle2, angle3);

	return 0;
}
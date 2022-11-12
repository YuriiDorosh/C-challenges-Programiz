#include <stdio.h>

void convert(double pd) {
	double kilograms = pd * 0.453592;
	printf("%lf", kilograms);
}


int main() {
	double pound;
	scanf("%lf", &pound);

	convert(pound);

	return 0;
}
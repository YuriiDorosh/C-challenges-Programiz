#include <stdio.h>

void convert(double fahr) {
	double cels = (fahr - 32) * 5 / 9;
	printf("%lf", cels);
}


int main() {

	double fahrenheit;
	scanf("%lf", &fahrenheit);

	convert(fahrenheit);

	return 0;
}
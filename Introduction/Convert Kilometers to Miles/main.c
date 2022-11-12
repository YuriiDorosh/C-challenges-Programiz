#include <stdio.h>

void convert(double km) {
	double miles = km / 1.6;
	printf("%lf", miles);
}


int main() {
	double kilometers;
	scanf("%lf", &kilometers);

	convert(kilometers);

	return 0;
}
#include <stdio.h>

void convert(double cm) {
	double feet = cm * 0.0328;
	printf("%lf", feet);
}


int main() {

	double centimeter;
	scanf("%lf", &centimeter);


	convert(centimeter);

	return 0;
}

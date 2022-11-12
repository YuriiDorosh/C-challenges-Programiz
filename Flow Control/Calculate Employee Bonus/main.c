#include <stdio.h>
#define percent 5

void calculateBonus(double salary) {
	double bonus = (salary * percent) / 100;
	printf("%lf", bonus);
}


int main() {
	double salary;
	int year;
	scanf("%lf", &salary);
	scanf("%d", &year);

	if (year > 5) {
		calculateBonus(salary);
	}
	else {
		return 1;
	}

	return 0;
}
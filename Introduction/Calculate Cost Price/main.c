#include <stdio.h>

void calculateCostPrice(double sell, double profit) {
	double costPrice = (sell * 100.0) / (100 + profit);
	printf("%.2lf", costPrice);
}


int main() {
	double sellingPrice;
	double profitPercent;
	scanf("%lf", &sellingPrice);
	scanf("%lf", &profitPercent);

	calculateCostPrice(sellingPrice, profitPercent);

	return 0;
}
#include <stdio.h>

void calculateProfit(double cost, double sell) {
	double profit = sell - cost;
	printf("%.2lf\n", profit);
}

void calculateProfitPercent(double cost, double sell) {
	double percent = ((sell - cost) / cost) * 100;
	printf("%.2lf", percent);
}


int main() {
	double costPrice;
	double sellingPrice;
	scanf("%lf", &costPrice);
	scanf("%lf", &sellingPrice);

	calculateProfit(costPrice, sellingPrice);
	calculateProfitPercent(costPrice, sellingPrice);

	return 0;
}
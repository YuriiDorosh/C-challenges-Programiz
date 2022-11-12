#include <stdio.h>

void divineChocolates(int N, int M) {
	int childGets = (N / M);
	int remainingChocolates = (N % M);
	printf("%d\n", childGets);
	printf("%d", remainingChocolates);
}


int main() {
	int chocolates;
	int child;  
	scanf("%d", &chocolates);
    scanf("%d", &child);
    
	divineChocolates(chocolates, child);

	return 0;
}
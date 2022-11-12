#include <stdio.h>
#include <math.h>

void powerOfNumber(int n, int p) {
    int result = pow(n, p);
    printf("%d", result);
}


int main() {
    int number;
    scanf("%d", &number);
    int power;
    scanf("%d", &power);
    
    powerOfNumber(number, power);

    return 0;
}


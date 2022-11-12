#include <stdio.h>

void checkAbundantNumber(int n){
    int sum = 0;
    for (int i = 1; i < n; ++i){
        if (n % i == 0){
            sum += i;
        }
    }
    if (sum > n) {
        printf("Abundant Number");
    }
    else {
        printf("Not an Abundant Number");
    }
}


int main() {
    int number;
    scanf("%d", &number);

    checkAbundantNumber(number);

    return 0;
}
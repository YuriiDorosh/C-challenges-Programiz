#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int sum;
    int value;
    int temp = number;
    sum = 0;

    while (temp != 0) {
        value = temp % 10;
        sum += value;
        temp /= 10;
    }
    printf("%d", sum);

    return 0;
}
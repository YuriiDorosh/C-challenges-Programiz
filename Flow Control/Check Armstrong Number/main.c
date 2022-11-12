#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int remainder;
    int result;
    result = 0;
    int temp = num;

    while (num != 0) {

        remainder = num % 10;

        result += remainder * remainder * remainder;

        num /= 10;
    }

    if (result == temp) {
        printf("Armstrong Number");
    }
    else {
        printf("Not an Armstrong Number");
    }

    return 0;
}

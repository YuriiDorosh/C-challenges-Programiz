#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int count;
    count = 0;

    while (number != 0) {
        number /= 10;
        count++;
    }

    printf("%d", count);

    return 0;
}
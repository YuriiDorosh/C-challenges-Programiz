#include <stdio.h>

void findGreatestMultiple(int n) {
    for (int i = 100; i >= 1; i--) {
        if (i % n == 0) {
            printf("%d", i);
            break;
        }
    }
}


int main() {
    int number;
    scanf("%d", &number);

    findGreatestMultiple(number);

    return 0;
}


#include <stdio.h>

int main() {
    int number;
    int flag;
    flag = 0;
    scanf("%d", &number);

    for (int i = 2; i < number; ++i) {

        if (number % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}
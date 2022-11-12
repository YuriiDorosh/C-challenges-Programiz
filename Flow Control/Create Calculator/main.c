#include <stdio.h>

int main() {
    char oper;
    scanf("%c", &oper);
    double first;
    scanf("%lf", &first);
    double second;
    scanf("%lf", &second);

    switch (oper) {
    case '+':
        printf("%.1lf", first + second);
        break;
    case '-':
        printf("%.1lf", first - second);
        break;
    case '*':
        printf("%.1lf", first * second);
        break;
    case '/':
        printf("%.1lf", first / second);
        break;
    default:
        break;
    }

    return 0;
}
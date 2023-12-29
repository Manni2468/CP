#include <stdio.h>

int big2(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int biggest = big2(a, b);
    printf("The biggest number is: %d\n", biggest);

    return 0;
}

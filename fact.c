#include <stdio.h>

long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int fact() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %lld\n\n", num, factorial(num));
    return 0;
}

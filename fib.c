#include <stdio.h>

int fib() {
    int num, i, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    for (i = 1; i <= num; ++i) {
        if (i == 1) {
            printf("%d, ", first);
            continue;
        }
        if (i == 2) {
            printf("%d, ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d, ", next);
    }
	printf("\n\n");
    return 0;
}

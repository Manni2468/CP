#include <stdio.h>

void sort_numbers(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c) {
        int temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

int sort() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    sort_numbers(&a, &b, &c);

    printf("Sorted numbers: %d %d %d\n", a, b, c);

    return 0;
}

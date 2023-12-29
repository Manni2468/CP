#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int length, i;
    char temp;

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int rev() {
    char str[100];

    printf("Enter a string to reverse: ");
    scanf("%s", str);

    reverse(str);

    printf("Reversed string is: %s\n", str);

    return 0;
}

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome or not
int isPalindrome(char str[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int pal() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the string
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    if (isPalindrome(str, length)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

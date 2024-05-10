#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char str[100];
    bool isPalindrome = true;
    int length, i;

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    length = strlen(str);

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
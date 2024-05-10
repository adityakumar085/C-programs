#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end of the string
    str[strcspn(str, "\n")] = 0;

    // Input the substring
    printf("Enter a substring to search for: ");
    fgets(substr, sizeof(substr), stdin);

    // Remove the newline character at the end of the substring
    substr[strcspn(substr, "\n")] = 0;

    // Check if the substring is present in the string
    if (strstr(str, substr) != NULL) {
        printf("The substring '%s' is present in the string.\n", substr);
    } else {
        printf("The substring '%s' is not present in the string.\n", substr);
    }

    return 0;
}
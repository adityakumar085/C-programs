#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Display the string in reverse order
    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
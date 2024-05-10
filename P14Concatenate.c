#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], concatenatedString[200];

    // Input the first string
    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);

    // Remove the trailing newline character from fgets
    if (string1[strlen(string1) - 1] == '\n') {
        string1[strlen(string1) - 1] = '\0';
    }

    // Input the second string
    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);

    // Remove the trailing newline character from fgets
    if (string2[strlen(string2) - 1] == '\n') {
        string2[strlen(string2) - 1] = '\0';
    }

    // Concatenate the strings
    strcpy(concatenatedString, string1);
    strcat(concatenatedString, string2);

    // Output the concatenated string
    printf("Concatenated string: %s\n", concatenatedString);

    return 0;
}
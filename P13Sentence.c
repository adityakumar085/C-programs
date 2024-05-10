#include <stdio.h>
#include <string.h>

int countWords(char *sentence) {
    int count = 0;
    int length = strlen(sentence);
    int i;

    // Traverse the sentence character by character
    for (i = 0; i < length; i++) {
        // If current character is not space and next character is either space or end of string, count it as a word
        if (sentence[i] != ' ' && (sentence[i + 1] == ' ' || sentence[i + 1] == '\0')) {
            count++;
        }
    }

    return count;
}

int main() {
    char sentence[1000];

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character from fgets
    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }

    // Count the words
    int wordCount = countWords(sentence);

    // Output the result
    printf("Number of words in the sentence: %d\n", wordCount);

    return 0;
}
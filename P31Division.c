#include <stdio.h>

int main() {
    int marks;

    // Prompt the user to enter the marks
    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    // Determine the division using switch statements
    switch (marks / 10) {
        case 10:
        case 9:
            printf("Division: Distinction\n");
            break;
        case 8:
            printf("Division: First\n");
            break;
        case 7:
            printf("Division: Second\n");
            break;
        case 6:
            printf("Division: Third\n");
            break;
        default:
            printf("Division: Fail\n");
    }

    return 0;
}
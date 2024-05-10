#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 5000;
    float amount;

    // PIN verification
    printf("Enter your PIN: ");
    scanf("%d", &pin);

    // Assume PIN is correct
    if (pin == 1234) {
        printf("\nWelcome to XYZ Bank ATM!\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nYour account balance is %.2f rupees.\n", balance);
                break;
            case 2:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= balance && amount <= 5000 && amount > 0 && (int)amount % 100 == 0) {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining balance is %.2f rupees.\n", balance);
                } else {
                    printf("Invalid amount or insufficient balance.\n");
                }
                break;
            default:
                printf("Invalid choice.\n");
        }
    } else {
        printf("Invalid PIN. Please try again later.\n");
    }

    return 0;
}
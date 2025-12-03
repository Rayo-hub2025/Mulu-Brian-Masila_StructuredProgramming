#include <stdio.h>

int main() {
    int pin, option;
    float balance = 7500;
    float amount;
    int correctPIN = 5678;

    // Login Section
    printf("===== Welcome to the ATM System =====\n");
    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin != correctPIN) {
        printf("Incorrect PIN! Access denied.\n");
        return 0;
    }

    printf("\nLogin successful!\n");

    // Main Menu Loop
    do {
        printf("\n===== ATM Menu =====\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw \n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! New balance: %.2f\n", balance);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else if (amount <= 0) {
                    printf("Invalid withdrawal amount!\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: %.2f\n", balance);
                }
                break;

            case 4:
                printf("Exiting system... Thank you!\n");
                break;

            default:
                printf("Invalid option! Please try again.\n");
        }

    } while(option != 4);

    return 0;
}


// in this programme user can check their bank balance,select the account type and can withdraw or deposit the money in their account

#include <stdio.h>

int main() {
    int account_type;
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    printf("Welcome to the Banking Project!\n");
    printf("Select your account type:\n");
    printf("1. Savings Account\n");
    printf("2. Checking Account\n");
    printf("3. Business/Current Account\n");
    printf("4. Recurring Deposit Account\n");

    printf("Enter your choice: ");
    scanf("%d", &account_type);

    printf("Your current balance is: $%.2f\n", balance);  

    printf("Do you want to (1) Deposit, (2) Withdraw or (3) Exit? ");
    scanf("%d", &choice);


    printf("Enter the amount: ");
    scanf("%lf", &amount);

    if (choice == 1) {
        balance += amount;
        printf("Deposit successful. Your new balance is: $%.2f\n", balance);
    } else if (choice == 2) {
        if (amount <= balance) {
            balance -= amount;
            printf("Withdrawal successful. Your new balance is: $%.2f\n", balance);
        } else {
            printf("Insufficient funds.\n");
        }
    } else if (choice == 3) {
        printf("Thank you for using our banking services.\n");
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}


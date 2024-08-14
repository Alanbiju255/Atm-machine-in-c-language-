
#include<stdio.h>
int main() {
    int a, choice, accountbalance = 1000, deposit, withdraw;
    char name[] = "Alan";
    int chances = 3;

    while (chances > 0) {
        printf("Enter the PIN: ");
        scanf("%d", &a);
        if (a == 2004) {
            printf("Password correct! Welcome, %s\n", name);
            break;
        } else {
            chances--;
            printf("Password is wrong! You have %d chances left\n", chances);
        }
    }

    if (chances == 0) {
        printf("Maximum attempts reached! Access denied\n");
        return 0;
    }

    printf("1. For Deposit\n");
    printf("2. For Withdraw\n");
    printf("Please select your option:\n ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter the amount to deposit: ");
            scanf("%d", &deposit);
            accountbalance += deposit;
            printf("Account balance: %d\n", accountbalance);
            break;
        case 2:
            printf("Enter the amount to withdraw: ");
            scanf("%d", &withdraw);
            accountbalance -= withdraw;
            printf("Account balance: %d\n", accountbalance);
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
    }

    return 0;
}


#include <stdio.h>

int main() {
    int a, choice, accountbalance = 1000, repeat, deposit, withdraw;
    char i, j;
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

    for (;;) {
        printf("1. For Deposit\n");
        printf("2. For Withdraw\n");
        printf("3. For Balance\n");
        printf("Please select your option:\n ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the amount to deposit: ");
                scanf("%d", &deposit);
                accountbalance +deposit;
                break;

            case 2:
                printf("Enter the amount to withdraw: ");
                scanf("%d", &withdraw);
                accountbalance -withdraw;
                break;

            case 3:
                printf("Do you want to see the account balance? (yes/no): ");
                scanf(" %c", &i);
                if (i == 'yes' || i == 'YES') {
                    printf("Account balance: %d\n", accountbalance);
                } else {
                    break;
                }
                // Add getchar() to consume newline character
                getchar();

             
             
        }

        printf("Do you want to continue? (yes/no): ");
        scanf(" %c", &j);
        if (j == 'no' || j == 'NO') {
            break;
        }
        // Add getchar() to consume newline character
        getchar();
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    int account_number = 0;
    float beginning_balance = 0;
    float total_charges = 0;
    float total_credits = 0;
    float credit_limit = 0;
    float current_balance = 0;

    while(1)
    {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account_number);
        if(account_number == -1)
            break;
        printf("Enter beginning balance: ");
        scanf("%f", &beginning_balance);
        printf("Enter total charges: ");
        scanf("%f", &total_charges);
        printf("Enter total credits: ");
        scanf("%f", &total_credits);
        printf("Enter credit limit: ");
        scanf("%f", &credit_limit);

        current_balance = (beginning_balance + total_charges - total_credits);
        
        if(current_balance > credit_limit)
        {
            printf("Account: %d\nCredit Limit: %.2f\nBalance: %.2f\n", account_number, credit_limit, current_balance);
            printf("Credit Limit Exceeded\n");
        }
    }



    return 0;
}
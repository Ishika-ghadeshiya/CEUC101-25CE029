/* Aim: to simulate an ATM machine.
This program is developed by Ishika_25TCEVBN */

#include<stdio.h>
int main()
{
    int choice;
    float withdrawing_amount,total_amount=5000;
    printf("Welcome");
    Label1:
    printf("\nEnter 1 to withdraw or enter 2 to exit");
    scanf("%d",&choice);
    while(1)
    {
        switch(choice)
        {
        case 1:
            printf("\nEnter the amount to be withdrawn");
            scanf("%f",&withdrawing_amount);
            if(withdrawing_amount<=total_amount)
            {
                total_amount=total_amount-withdrawing_amount;
                printf("\n Your current balance is: %f",total_amount);
                goto Label1;
            }
            else
            {

                printf("\nYou have insufficient balance.");
                return 1;
            }
            break;
        case 2:
            return 1;
            break;
        default:
            printf("\nPlease make a valid choice");
            return 1;
            break;
        }
    }

}

//  creating a menu ordering system, which allows customers to select the items from the menu and compute the total cost of their order
#include<stdio.h>
int main()
{
    int choice;
    int total=0;
    printf("Welcome to Foodies is a restaurant (established in 2020).");
    printf("\nPlease select items from the menu given below");

           {
           menu:   printf("\nMenu;");
           printf("\n1. Burger - Rs 150");
           printf("\n2. Pizza - Rs 200 ");
           printf("\n3. Pasta - Rs 120 ");
           printf("\n4. Sandwich - RS 100 ");
           printf("\n5. French Fries - Rs 80 ");
           printf("\nEnter 0 to finish order");
           }
            printf("\nEnter your choices");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                total=total+150;
                printf("\nBurger is added to your order");
                printf("\n bill amount is:%d",total);
                break;
                case 2:
                total=total+200;
                printf("\nPizza is added to your order");
                printf("\n bill amount is:%d",total);
                break;
                case 3:
                total=total+120;
                printf("\nPasta is added to your order");
                printf("\n bill amount is:%d",total);
                break;
                case 4:
                total=total+100;
                printf("\nSandwich is added to your order");
                printf("\n bill amount is:%d",total);
                break;
                case 5:
                total=total+80;
                printf("\nFrench Fries is added to your order");
                printf("\n bill amount is:%d",total);
                break;
                case 0:
                    printf("Your order is completed");
                    break;
                default:
                    printf("Please enter a valid choice");

            }
                if(choice!=0)
                {
                    goto menu;
                }
                else
                {
                    printf("The total bill amount to be paid is:%d",total);
                }

                    printf("\nThis program is developed by Ishika_25TCEVBN");
                   return 0;
}

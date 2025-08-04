// this program covers the code for a system that calculates the total shopping amount and applies a discount based on their spendings
#include<stdio.h>
int main()
{
    float discount1, discount2,Total_Amount,Final_Amount;;
    printf("Welcome to ShopEase Online ");
    printf("\nEnter the Total Amount in rupees to get discounts");
    scanf("%f",&Total_Amount);
    if(Total_Amount<1000)
    {
       printf("No discounts");
       printf("\nFinal Amount is rupees: %.2f",Total_Amount);
    }
    else if(Total_Amount>=1000 && Total_Amount<5000)
    {
        printf("\nYou are getting 10%% discount");
        printf(" \nTotal amount:%.2f",Total_Amount);
        discount1= (10*Total_Amount)/100;
         printf(" \nDiscount:%.2f",discount1);

    Final_Amount = Total_Amount-discount1;
    printf("\nFinal Amount is rupees: %.2f",Final_Amount);
    }
     else
     {
          printf("\nYou are getting 20%% discount");
          printf(" \nTotal amount:%.2f",Total_Amount);
         discount2= (20*Total_Amount)/100;
         printf(" \nDiscount:%.2f",discount2);


         Final_Amount = Total_Amount-discount2;
      printf("\nFinal Amount is rupees: %.2f",Final_Amount);
     }

     printf("\nThis program is developed by Ishika_25TCEVBN");
    return 0;


}

//  This program provides code for a system to decide whether the visitor is should be given a free entry or should be charged
#include<stdio.h>
#define ticket 400
int main()
{
    int Age,visitors,Total_amount;
    printf(" Welcome To Sunrise Amusement Park");
    printf("\nEnter your Age");
    scanf("%d",&Age);
    if (Age<=14)
    printf("\nYou are eligible for free entry");
    else printf("\nEnter the number of visitors");
    scanf("%d",&visitors);
    Total_amount=visitors*ticket;
    printf("\nThe total amount to be paid is:%d",Total_amount);
    printf("\n This program is developed by Ishika_25TCEVBN");
    return 0;
}


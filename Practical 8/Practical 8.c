//This program covers the code to check the eligibility criteria to open a savings account in a bank.
#include<stdio.h>
int main()
{
    int Age;
    printf("Welcome to Spark Savings Bank ");
    printf("\nEnter your Age ");
    scanf("%d",&Age);
    if(Age>0)
    {
        if(Age<18)
        {
            printf(" You are not eligible age to open a savings account ");
        }
        else if(Age>=18 && Age<=59)
        {
            printf(" You are eligible age to open a regular savings account");
        }
        else
            printf("You are eligible for Senior Citizen Account ");
    }
    else
        printf(" Enter a valid Age");
    printf("\n This program is developed by Ishika_25TCEVBN");
    return 0;

}

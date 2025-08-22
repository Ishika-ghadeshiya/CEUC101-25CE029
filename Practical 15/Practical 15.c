/*  This program allows user to set a starting number of seconds and
then count down to zero, displaying each second as it decrements. */
#include<stdio.h>
void main()
{
    int s;
    printf("It is a countdown timer");
    printf("\nEnter the number of seconds");
    scanf("%d",&s);
    while(s>=0)
    {
sleep(1);
        printf("\n\a%d",s);
        s--;
    }
    printf("\nCountdown completed!");
    printf("\nThis program is developed by Ishika_25TCEVBN");
}

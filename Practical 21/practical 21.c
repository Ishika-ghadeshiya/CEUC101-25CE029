#include<stdio.h>
void main()
{
    int data[25],p=0,n=0,o=0,e=0,i;


     printf("Enter 25 integers");
    for(i=0;i<24;i++)
    {

         scanf("%d",&data[i]);
         if(data[i]>0)
            p++;
         else
            n++;
         if(data[i]%2==0)
            e++;
         else
            o++;
    }

    printf("\nTotal number of positive numbers=%d",p);
    printf("\nTotal number of negative numbers=%d",n);
    printf("\nTotal number of even numbers%d=",e);
    printf("\nTotal number of odd numbers%d=",o);
    printf("\nThis program is developed by Ishika_25CE029");
}

#include<stdio.h>
void main()
{
    int r,c,i,j;

   x: printf("\nEnter the size of table vertically");
    scanf("%d",&r);
    printf("\nEnter the size of table horizontally");
    scanf("%d",&c);

     if(r>0&&c>0)
     {
          printf("\nMultiplication Table (%dx%d) :\n",r,c);
        for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("\t%d",i*j);
        }
        printf("\n");
    }
     }
   else
   {
       printf("\nInvalid input");
       goto x;
   }
   printf("\nThis program is developed by Ishika_25TCEVBN");
}

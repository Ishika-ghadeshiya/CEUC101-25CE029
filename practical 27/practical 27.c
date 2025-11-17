
#include<stdio.h>

int savings();
void change();
int n,a,b,c,i;
void main()
{
    printf("Enter the number of months\n");
    scanf("%d", &n);
    printf("Enter the savings of 1st month");
    scanf("%d",&a);
    printf("Enter the savings of 2nd month");
    scanf("%d",&b);
    savings();
    printf("The savings would be:%d\n",c);
    printf("\nThis program is developed by Ishika_25CE029");
}
int savings()
{
    for(i=3;i<=n;i++)
    {
        c=a+b;
        change();
    }
    return c;
}

void change()
{
    a=b;
    b=c;
}



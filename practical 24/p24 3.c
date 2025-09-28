#include<stdio.h>
void main()
{
    int i;
    char s1[25],s2[25];

    printf("Enter first text:");
    scanf("%s",s1);
    printf("Enter second text:");
    scanf("%s",s2);

    for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        break;

    }
    if(s1[i]==s2[i])
    {
        printf("Both are same");
    }
    else
    {
        printf("Both are different");
    }
}

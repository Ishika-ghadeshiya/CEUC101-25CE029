#include<stdio.h>
void main()
{
	int i,j,n=5,s;

	for(i=n;i>=1;i--)
	{
		for(s=0;s<n-i;s++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		for(j=2;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{
		for(s=0;s<n-i;s++)
			printf(" ");
		for(j=i;j>=1;j--)
			printf("%d",j);
		for(j=2;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}
}


#include<stdio.h>
void main()
{
	int n=7,n1,i,j,x,y;

	n1=(n/2)+1;

	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=(n1-i);j++)
		{
			printf(" ");
		}
		x=65;
		for(j=n1-i+1;j<=n1;j++)
		{
			printf("%c",x);
			x++;
		}
		y=64+i-1;
		for(j=1;j<=i-1;j++)
		{
			printf("%c",y);
			y--;
		}
		printf("\n");
	}


	for(i=1;i<=n1-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		x=65;
		for(j=i+1;j<=n1;j++)
		{
			printf("%c",x);
			x++;
		}
		y=64+n1-1-i;
		for(j=1;j<=n1-1-i;j++)
		{
			printf("%c",y);
			y--;
		}
		printf("\n");

	}
	printf("\nThis program is developed by Ishika_25CE029");
}


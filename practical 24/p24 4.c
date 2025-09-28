#include<stdio.h>

void main()
{
	int i,j;
	char s1[25],s2[25];

	printf("Enter text:");
	scanf("%s",s1);

	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("Copied Text is %s",s2);

}

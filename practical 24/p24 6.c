#include<stdio.h>
void main()
{
	int i;
	char s1[25];

	printf("Enter text:");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
		{
			s1[i]=s1[i]-32;
		}
	}
	printf("Converted Text is %s",s1);

}

#include<stdio.h>
void main()
{
	int i;
	char str[50];
	printf("Enter Text:");
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		if(i==0 || str[i-1]==' ')
		{
			if(str[i]>='a'&& str[i]<='z')
			{
				str[i]=str[i]-32;
			}
		}
	}
	printf("%s",str);

}

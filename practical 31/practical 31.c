#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,N;
    char*name;
    printf("Enter the number of characters in your name\n");
    scanf("%d",&n);
    name= (char*)calloc(n+1,sizeof(char));
    printf("Enter your name\n");
    scanf("%s",name);
    printf("entered name is %s\n",name);
    printf("Enter the number of characters in your new name\n");
     scanf("%d",&N);
    name = (char*)realloc(name, (N + 1) * sizeof(char));

    printf("Enter your new name\n");
    scanf("%s",name);
    printf("entered new name is %s\n",name);


    printf("\nThis program is developed by Ishika_25CE029");




}

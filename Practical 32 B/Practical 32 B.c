#include<stdio.h>
void main()
{
    FILE *fp;
    int n,i,marks;
    fp=fopen("marks.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open file\n");

    }
    else
        {
            printf("Enter the number of students\n");
            scanf("%d",&n);
            printf("Enter the marks\n");
            for(i=0;i<n;i++)
            {
                scanf("%d",&marks);
                putw(marks,fp);

            }

        }
        fclose(fp);


        printf("Entered marks are\n");
        fp= fopen("marks.txt","r");
        if(fp==NULL)
    {
        printf("Cannot open file\n");

    }
    else
        {

    while((marks=getw(fp)) != EOF)
    {
        printf("%d\n",marks);
    }
        }
        fclose(fp);
 printf("This program is developed by Ishika_25CE029\n");
}

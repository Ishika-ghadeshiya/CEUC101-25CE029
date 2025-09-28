#include<stdio.h>
void main()
{
int seat[10][15] = {{0}},n,i,j,r,c;
printf("Enter the number of seats to be reserved");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter row and seat number for reserved seat%d\n",i+1);
scanf("%d",&r);
scanf("%d",&c);
seat[r][c] =1;
}
for(i=0;i<10;i++)
{
printf("Row:%-3d",i+1);
for(j=0;j<14;j++)
{
printf("%d",seat[i][j]);
}
printf("\n");
}
printf("\nThis program is developed by Ishika_25CE029");
}

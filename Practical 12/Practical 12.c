/* This program generates a catalog, ensuring it displays each book ID on
 a new line and highlights special editions with a clear note next to their ID.*/

#include<stdio.h>
void main()
{
    int n;
    printf("City High School Library");
    printf("\nLibrary catalog");
    for(n=1; n<=50; n++)
    {
        if(n%5==0)
        {
            printf("\nBook ID: %d(Special Edition)",n);
            continue;
        }
        printf("\nBook ID: %d",n);
    }
    printf("\nThis program is developed by Ishika_25TCEVBN");
}

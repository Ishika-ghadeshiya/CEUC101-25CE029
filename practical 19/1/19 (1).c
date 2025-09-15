#include <stdio.h>

void main()
 {
    int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= i; j++)
            {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
            }
        printf("\n");
    }

printf("\nThis program is developed by Ishika_25TCEVBN");
}

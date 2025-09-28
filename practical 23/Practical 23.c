#include <stdio.h>

void main()
{
    int n,i,j,max_profit = 0,buy_day = 0, sell_day = 0,prices[50],profit;

    printf("Enter number of days: ");
    scanf("%d", &n);

    printf("Enter prices:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &prices[i]);
    }

    for (i = 0; i < n; i++)
     {
        for (j = i + 1; j < n; j++)
            {
             profit = prices[j] - prices[i];
            if (profit > max_profit)
             {
                max_profit = profit;
                buy_day = i + 1;
                sell_day = j + 1;
            }
        }
    }

    if (max_profit > 0)
        {
        printf("Maximum Profit = %d\n", max_profit);
        printf("Buy on day %d, Sell on day %d\n", buy_day, sell_day);
    }
    else
    {
        printf("No Profit\n");
    }

}

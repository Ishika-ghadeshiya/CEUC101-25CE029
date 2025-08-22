#include <stdio.h>
void main()
{
    int total_matchsticks=21,user_pick,computer_pick,choice;
    printf("THE MATCHSTICK GAME");
    printf("\nThe one who picks the last matchstick loses the game");
    printf("\nTotal Matchsticks = 21");
    printf("\nEnter 1 to start the game");
    scanf("%d",&choice);
    if(choice==1)
    {
        while(total_matchsticks>1)
        {
            printf("\nPick a number between 1 to 4");
            scanf("%d",&user_pick);
            if(user_pick>=1&&user_pick<=4)
            {
                computer_pick=5-user_pick;
                total_matchsticks-=user_pick;
                printf("\ncomputer's pick: %d",computer_pick);
                total_matchsticks-=computer_pick;
                printf("\nRemaining matchsticks: %d",total_matchsticks);

            }
             if (total_matchsticks==1)
                {
                    printf("\nComputer wins!");
                     break;

                }
        }
    }
    else
    {
        printf("\nInvalid choice");
    }
    printf("\nThis program is developed by Ishika_25TCEVBN");
}

// Aim: Tracking Attendance at a workshop
#include<stdio.h>
void main()
{
    int  p[15],i,ap[14];
    // p is participants and ap is actual participants

    for(i=0;i<15;i++)
    {
    printf("Enter participant IDs");
    scanf("%d",&p[i]);
    }
    for(i=0;i<14;i++)
    {
        printf("Enter IDs of participant who attended the workshop");
        scanf("%d",&ap[i]);
    }
    for(i=0;i<15;i++)
    {
        if(p[i]!=ap[i])
        {
            printf("Missing ID is :%d",p[i]);
            break;
        }

    }
     printf("\nThis program is developed by Ishika_25CE029");
}

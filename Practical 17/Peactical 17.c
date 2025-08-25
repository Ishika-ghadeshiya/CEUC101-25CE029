#include<stdio.h>
void main()
{
    int minute;
    float distance=0.0;
     printf("THIS IS A DISTANCE TRACKING SIMULATION");
    while(1)
    {
        sleep(1);
        minute++;
        distance=distance+0.5;
        printf("\nMinute %d: Distance covered=%.1f km",minute,distance);
        if(distance>=10.0)
        {
              printf("\nMarathon complete! ");
        break;

        }

    }
    printf("\nThis program is developed by Ishika_25TCEVBN");
}


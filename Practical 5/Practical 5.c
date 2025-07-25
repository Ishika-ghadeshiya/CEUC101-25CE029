#include<stdio.h>
int main()
{
    long long Population,Men,Women, Litracy, Illitracy,Literate_Men,Illiterate_Men,Illiterate_Women,Literate_Women;
    Population=1441981744;
    Women=Population*(48.8/100);
    printf("The total number of Women: %lld", Women);
    Men=Population-Women;
    printf(" \nThe total number of Men: %lld", Men);
    Litracy= Population*(85.95/100);
    printf("\nThe total literate population is: %lld",Litracy);
    Illitracy= Population-Litracy;
    printf("\nThe total illiterate population is :%lld",Illitracy );
    Literate_Men= Men*(80.95/100);
    printf("\nThe total literate men are: %lld", Literate_Men);
    Illiterate_Men= Men-Literate_Men;
    printf("\nThe total illiterate men are: %lld",Illiterate_Men);
    Literate_Women= Women*(62.84/100);
    printf("\nThe total literate Women are: %lld", Literate_Women);
    Illiterate_Women= Women-Literate_Women;
    printf("\nThe total illiterate Women are: %lld",Illiterate_Women);
    printf("\n This program is developed by Ishika_25TCEVBN");
    return 0;

}

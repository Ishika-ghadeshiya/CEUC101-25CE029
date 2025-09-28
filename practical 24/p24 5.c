#include <stdio.h>

    void main()
    {
    int i, j;
    char s1[50], s2[50];

    printf("Enter first text: ");
    scanf("%s", s1);

    printf("Enter second text: ");
    scanf("%s", s2);


    for(i = 0; s1[i] != '\0'; i++);

   {
    for(j = 0; s2[j] != '\0'; j++, i++)
        {
        s1[i] = s2[j];
        }
    }

    s1[i] = '\0';

    printf("Concatenated text is: %s\n", s1);


}

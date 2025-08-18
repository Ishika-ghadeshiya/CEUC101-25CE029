// This program determines the grade of a student based on their marks.
#include<stdio.h>
#include<math.h>
void main()
{
    float marks;
    printf("Enter your marks");
    scanf("%f",&marks);
    marks=round(marks);
    printf("You have entered: %.2f",marks);
    if( marks<=0 || marks>=100)
    {
     printf("\nInvalid marks");
    }
    else

    (marks>=90)? printf("\nGrade A"):(marks>=80&&marks<90)?printf("\nGrade B"):(marks>=70&&marks<80)?printf("\nGrade C"):(marks>=60&&marks<70)?printf("\nGrade D"):printf("\nGrade F");


    printf("\nThis program is developed by Ishika_25TCEVBN");
}

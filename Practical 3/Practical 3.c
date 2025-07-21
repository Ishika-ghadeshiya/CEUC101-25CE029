// This program contains how BMI is calculated
#include<stdio.h>
int main()
{
   float Height,Weight,BMI;
   printf(" Welcome to ActiveLife Studio,");
   printf("\nEnter your height in (m):");
   scanf("%f", &Height);
   printf("Enter your weight in (kg):");
   scanf("%f", &Weight);
   BMI= Weight/(Height*Height);
   printf(" Your BMI is: %f",BMI);
   printf("\n This program is developed by Ishika_25TCEVBN");
    return 0;

}

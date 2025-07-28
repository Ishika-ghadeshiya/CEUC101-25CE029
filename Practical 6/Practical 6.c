// This program contains the conversion of temperature from Fahrenheit to Calsius
#include<stdio.h>
int main()
{
    float Celsius, Fahrenheit;
    printf("Enter the temperature in Celsius");
    scanf("%f",&Celsius);
    Fahrenheit=(Celsius*9.0)/5.0+32;
    printf("\nThe temperature in Fahrenheit is:%.2f",Fahrenheit);
    printf("\n This program is developed by Ishika_25TCEVBN");
    return 0;
}

#include<stdio.h>
#include<math.h>
void input_sides();
void validate();
int Area();
int perimeter();
void type();
int a,b,c,p,ch;
float area,s,result;
void main()
{
   input_sides();
   printf("This program is developed by Ishika_25CE029\n");
}

void input_sides()
{
    printf("Enter side a\n");
    scanf("%d",&a);
    printf("Enter side b\n");
    scanf("%d",&b);
    printf("Enter side c\n");
    scanf("%d",&c);
    validate();

}
void validate()
{
    if(a>0 && b>0 && c>0)
    {
    if(a<(b+c) && b<(a+c) && c<(a+b))
    {
        printf("Valid triangle\n");
        perimeter();
        printf("Perimeter: %d\n",p);
        Area();
        printf("AREA: %.2f\n", result);
        type();

    }

    else
        printf("Invalid triangle\n");
    }
    else
        printf("Enter a valid side, negative and zero values are invalid\n");
}
int Area()
{
    s=(a+b+c)/2.0;
    area= (s*(s-a)*(s-b)*(s-c));
     result = sqrt(area);
     return result;
}
int perimeter()
{
    p= a+b+c;
    return p;
}
void type()
{
    if( a ==b && b==c)
        printf("It is an Equilateral Triangle\n");
    else if( a==b || b==c || c==a)
        printf("It is an Isosceles Triangle\n");
    else
        printf("It is a Scalene Triangle\n");
}

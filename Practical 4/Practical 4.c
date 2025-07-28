// In this program we would discover various Data Types and explore their Ranges
#include<stdio.h>
#include<limits.h>
#include<float.h>
void main()
{
    printf("Data Types and their Ranges");
    printf("\nThe size of unsigned integer is %zu", sizeof(unsigned int));
    printf("\nThe range of unsigned integer is : 0 to %u",UINT_MAX);
    printf("\nThe size of integer is %zu", sizeof(int));
    printf("\nThe range of integer is: %d to %d", INT_MIN,INT_MAX);
    printf("\nThe size of character is %zu",sizeof(char));
    printf("\nThe range of character is: %d to %d",CHAR_MIN,CHAR_MAX);
    printf ("\nThe size of long is %zu",sizeof(long));
    printf("\nThe range of long is: %ld to %ld",LONG_MIN,LONG_MAX);
    printf("\nThe size of long long is %zu", sizeof(long long));
    printf("\nThe range of long long is: %lld to %lld",LLONG_MIN,LLONG_MAX);
    printf("\nThe size of unsigned long is %zu", sizeof(unsigned long));
    printf("\nThe range of unsigned long is : 0 to %lu",ULONG_MAX);
    printf("\nThe size of unsigned long long is %zu", sizeof(unsigned long long));
    printf("\nThe range of unsigned long long is : 0 to %lu",ULLONG_MAX);
    printf("\nThe size of float is :%zu", sizeof(float));
    printf("\nThe range of float is : %e to %e",FLT_MIN,FLT_MAX);
    printf("\nThe size of double is :%zu", sizeof(double));
    printf("\nThe range of double is : %e to %e",FLT_MIN,FLT_MAX);
    printf("\nThe size of long double is :%zu", sizeof( long double));
    printf("\nThe range of long double is : %d to %d",LDBL_MIN,LDBL_MAX);
    printf("\n This program is developed by Ishika_25TCEVBN");

}

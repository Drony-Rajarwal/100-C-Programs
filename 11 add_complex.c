#include<stdio.h>
#include<stdlib.h>
struct complex_number
{
    int real, imag;
};
int main()
{
    struct complex_number x1, y1, z1, x2, y2, z2;
    printf("Insert first real number: ");
    scanf("%d", &x1.real);
    printf("Insert first imaginary number: ");
    scanf("%d", &x2.imag);
    printf("Insert second real number: ");
    scanf("%d", &y1.real);
    printf("Insert second imaginary number: ");
    scanf("%d", &y2.imag);
    z1.real = x1.real + y1.real;
    z2.imag = x2.imag + y2.imag;
    if (z2.imag >= 0)
    {
        printf("Sum of complex number is: %d + %di \n", z1.real, z2.imag);
    }
    else
    {
        printf("Sum of complex number is: %d - %di \n", z1.real, z2.imag);
    }
    return 0;
}
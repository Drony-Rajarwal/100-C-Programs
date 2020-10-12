#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, gross_sal;

    printf("Insert the Basic salary: ");
    scanf("%d", &x);

    y = (x * 10) / 100;
    z = (x * 12) / 100;

    gross_sal = x + y + z;

    printf("Gross salary is: %d", gross_sal);
    return 0;
}
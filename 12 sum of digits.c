#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, y, z;
    printf("Insert some numbers: ");
    scanf("%d", &z);

    while (z != 0)
    {
        y = z % 10;
        x = x + y;
        z = z / 10;
    }
    printf("The sum is %d", x);
    return 0;
}
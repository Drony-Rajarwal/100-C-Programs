#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Random numbers from 1 - 1000: \n");

    for (x = 1; x <= 20; x++)
    {
        y = rand() % 1000 + 1;
        printf("%d\n", y);
    }
    return 0;
}
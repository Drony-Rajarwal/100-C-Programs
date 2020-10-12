1 #include<stdio.h> 2 #include<stdlib.h> 3 4 int main() 5
{
    6 int x, y, z[100];
    7 8 printf("Choose number of digits: ");
    9 scanf("%d", &x);
    10 11 printf("Enter desired numbers: ");
    12 for (y = 0; y < x; y++) 13
    {
        14 scanf("%d", &z[y]);
        15
    }
    16 17 printf("The reversed numbers are: ");
    18 for (y = x - 1; y >= 0; y--) 19
    {
        20 printf("%d", z[y]);
        21
    }
    22 return 0;
    23
}
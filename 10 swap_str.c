#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

int main() 
{
    char nameone[100], nametwo[100], *output;
    printf("Insert a name: ");
    gets(nameone);
    printf("Insert second name: ");
    gets(nametwo);
    printf("Names before swapping: %s and %s \n", nameone, nametwo);
    output = (char *)malloc(100);
    strcpy(output, nameone);
    strcpy(nameone, nametwo);
    strcpy(nametwo, output);
    printf("Names after swapping: %s and %s ", nameone, nametwo);
    return 0;
}
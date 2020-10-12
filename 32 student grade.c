#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;

    printf("Insert your mark: ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100)
        printf("Invalid Mark.");
    else if (mark <= 100 && mark >= 70)
        printf("Grade A, Excellent!");
    else if (mark < 70 && mark >= 60)
        printf("Grade B, Good!");
    else if (mark < 60 && mark >= 50)
        printf("Grade C, Weldone!");
    else if (mark < 50 && mark >= 40)
        printf("Grade D, Pass!");
    else if (mark < 40 && mark >= 35)
        printf("Grade E, Narrow Escape");
    else
        printf("Grade F, Fail");
    return 0:
}
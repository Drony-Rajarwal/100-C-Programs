#include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 int main()
 {
 struct student
 {
 char name[100], GR[100];
 int x;
 float y;
 };
 
 union group
 {
 struct student std;
 };
 
 union group set;
 
printf("Insert Student name: ");
 scanf("%s",&set.std.name);
 
 printf("Insert Student's Reg_no: ");
 scanf("%d", &set.std.x);
 
 printf("Insert Student's Gender: ");
 scanf("%s",&set.std.GR);
 
 printf("Insert Student's mark: ");
 scanf("%f",&set.std.y);
 
printf("\n Student's name = %s",set.std.name);
printf("\n Student's Reg_no = %d", set.std.x);
 printf("\n Student's Gender = %s",set.std.GR);
 printf("\n Student's mark = %.1f",set.std.y);
 
 return 0;
}
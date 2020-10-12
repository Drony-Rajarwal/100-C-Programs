 #include <stdio.h>
 #include <stdlib.h>
 
 struct student
 {
 char name[100];
 int reg_no, sub[100], total;
 };
 
 int main()
 {
 struct student ST[200];
 int x,y,t=0,max,cnt,N, A[200];
 
 printf("Insert number of students: ");
 scanf("%d",&N);
 
 for(x=0; x<N; x++)
 {
 t=0;
 printf("Enter name of Student: ");
 scanf("%s",&ST[x].name);
 
 printf("Enter Reg no of Student: %d",x+1);
 scanf("%d",&ST[x].reg_no);
 
 for(y=0; y<=2; y++)
 {
 printf("Enter Student %d Mark of Subject %d : ",x+1,y+1);
 scanf("%d",&ST[x].sub[y]);
 t = t+ST[x].sub[y];
 }
 ST[x].total = t;
 }
 
 printf("\n\n\n");
 
 for(x=0; x<N; x++)
 {
 printf("Student %d with Name : %s \n", x+1, ST[x].name);
 printf("Student %d with Reg_no : %d \n", y+1, ST[x].reg_no);
 
 for(y=0; y<=2; y++)
 {
 printf("Marks of Subject %d : %d \n",y+1, ST[x].sub[y]);
 }
 printf("Total mark of students is: %d",ST[x].total);
 }
 
 return 0;
 }
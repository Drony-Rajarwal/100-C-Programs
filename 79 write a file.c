#include <stdio.h>
 #include <stdlib.h>

 int main()
 {
 char ch[2000];

FILE *myfp;

 myfp = fopen("C:/Users/USER/Desktop/CFiles/MyFile.txt","w");

 printf("Write some sentences: ");
 gets(ch);
 fprintf(myfp,"%s",ch);
 fclose(myfp);

 return 0;
 }
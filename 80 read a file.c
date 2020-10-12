#include <stdio.h>
#include <stdlib.h>
 
 int main()
 {
 FILE *myfp;
 char ch[1000];
 
 myfp = fopen("C:/Users/USER/Desktop/CFiles/MyFile.txt","r");
 
 fgets(ch, 1000, (FILE*)myfp);
 printf("%s",ch);
 
 fclose(myfp);
 return 0;
 }
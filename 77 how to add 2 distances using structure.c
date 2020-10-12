#include <stdio.h>
#include <stdlib.h>

 struct Calculate
 {
 int ft;
 float inch;
 }x1, x2, total;

 int main()
 {
 printf("Insert first distance value in Feet(ft) : ");
 scanf("%d",&x1.ft);

printf("Insert first distance value in inch: ");
 scanf("%f",&x1.inch);

 printf("Insert second distance in Feet(ft): ");
 scanf("%d",&x2.ft);

 printf("Insert second distance in inch: ");
 scanf("%f",&x2.inch);

 total.ft = x1.ft + x2.ft;
 total.inch = x1.inch + x2.inch;

 if(total.inch > 12)
 {
 total.inch = total.inch - 12;
 ++total.ft;
 }

 printf("The total value of the distance is = %d\'-%.1f\"",total.ft,total.inch);

 return 0;
 }
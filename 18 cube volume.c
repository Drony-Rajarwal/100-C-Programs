#include <stdio.h>
int main()
{
	float side,area;
	printf("enter side of cube: ");
	scanf("%f",&side);
	
   
	area=side*side*side;
	printf("VOC: %f\n",area);
	return 0;
}
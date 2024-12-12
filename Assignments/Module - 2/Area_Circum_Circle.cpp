#include<stdio.h>
float pi=3.14;
main()
{
	
	printf("Area & Circumference of a Circle.");
	printf("\n=================================");
	int R, Area, Circum;
	
	printf("\nEnter The Value of Raidus (R):");
	scanf("%d",&R);
	
	Area=pi*R*R;
	printf("\nArea of Circle is:%d",Area);
	
	Circum=2*pi*R;
	printf("\nCircumference of Circle is:%d",Circum);
}

#include<stdio.h>
main()
{
	printf("Area of Square, Cube & Triangle.");
	printf("\n================================");
	int a, b, h, Square, Cube, Triangle;
	printf("\nEnter The Value of A:");
	scanf("%d",&a);
	printf("\nEnter The Value of B:");
	scanf("%d",&b);
	printf("\nEnter The Value of H:");
	scanf("%d",&h);
	
	Square=a*a;
	printf("\nArea of Square:%d",Square);
	Cube=6*a*a;
	printf("\nArea of Cube:%d",Cube);
	Triangle=0.5*b*h;
	printf("\nArea of Triangle:%d",Triangle);	
}

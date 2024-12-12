#include<stdio.h>
main()
{
	printf("Required QTY. to Distribute 5 Apples to Each Student.");
	printf("\n=====================================================");
	int stu, Apple;
	printf("\nEnter Number of Students:");
	scanf("%d", &stu);
	Apple=stu*5;
	printf("\nRequired QTY. of Apples:%d",Apple);
}

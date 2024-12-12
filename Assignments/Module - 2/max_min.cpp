#include<stdio.h>
main()
{
	int a, b, c;
		printf("Enter The Value of A:");
		scanf("%d",&a);
		printf("Enter The Value of B:");
		scanf("%d",&b);
		printf("Enter The Value of C:");
		scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("The Value of A is Maximum.");
	}
	else if (b>a && b>c)
	{
		printf("The Value of B is Maximum.");
	}
	else if (c>a && c>b)
	{
		printf("The Value of C is Maximum.");
	}	
	if(a<b && a<c)
	{
		printf("\nThe Value of A is Minimum.");
	}
	else if (b<a && b<c)
	{
		printf("\nThe Value of B is Minimum.");
	}
	else if (c<a && c<b)
	{
		printf("\nThe Value of C is Minimum.");
	}
}

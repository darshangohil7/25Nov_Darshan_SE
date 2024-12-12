#include<stdio.h>
main()
{
	double a, b, profit, loss, gain;
	printf("Enter The Value of Selling Price:");
	scanf("%lf",&a);
	printf("Enter The Value of Cost Price:");
	scanf("%lf",&b);
	if(a>b)
	{
		profit=a-b;
		gain=(profit*100)/b;
		printf("Your Profit is:%.2lf",profit);
		printf("\nYou Profit in Precentage:%.2lf",gain);
	}
	else if(b>a)
	{
		loss=b-a;
		gain=(loss*100)/b;
		printf("\nYour Loss is:%.2lf",loss);
		printf("\nYou Loss in Precentage:%.2lf",gain);
	}
	else
	{
		printf("No Profit No Loss.");
	}
}

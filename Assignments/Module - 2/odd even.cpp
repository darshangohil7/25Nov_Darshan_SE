#include<stdio.h>
main()
{
	int a, month;
	
	printf("Enter The Value:");
	scanf("%d", &a);
	if (a%2==0)
	{
		printf("The Number is Even.");
	}
	else
	{
		printf("The Number is Odd.");
	}
	printf("\n\n======== MONTH ========");
	printf("\nEnter The Number Between 1 to 12 to Know The Month:");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("Month: January.");
		break;
		case 2:
			printf("Month: February.");
		break;
		case 3:
			printf("Month: March.");
		break;
		case 4:
			printf("Month: April.");
		break;
		case 5:
			printf("Month: May.");
		break;
		case 6:
			printf("Month: June.");
		break;
		case 7:
			printf("Month: July.");
		break;
		case 8:
			printf("Month: August.");
		break;
		case 9:
			printf("Month: September.");
		break;
		case 10:
			printf("Month: Octobor.");
		break;
		case 11:
			printf("Month: November.");
		break;
		case 12:
			printf("Month: December.");
		break;
		default:
			printf("Error! Please enter the number between 1 to 12.");
		break;
	}
}

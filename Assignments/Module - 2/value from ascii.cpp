#include<stdio.h>
main()
{
	int ascii;
	home:
	printf("\nEnter ASCII Code:");
	scanf("%d",&ascii);
	if(ascii>=0 && ascii<=127)
	{
		printf("\nThe Entered Ascii Valued Character:%c",ascii);
	}
	else
	{
		printf("Please Enter Code Between 0 to 127.");
		goto home;
	}
}

#include<stdio.h>
#include<stdlib.h>

main()
{
	float pkr, dollar, euro;
	int option;
	char restart;
	
	abdullah:
	printf("Enter PKR: ");
	scanf("%f",&pkr);
	
	printf("1-Dollar\n2-Euro ");
	scanf("%d",&option);
	
	if(option == 1)
	{
		dollar = pkr/156.91;
		printf("\n\nPKR into USD: %f", dollar);
	}
	else if(option == 2)
	{
		euro = pkr/0.0057 ;
		printf("\n\nPKR into Euro: %f", euro);
	}
	else
	{
		printf("\n\nWrong Input!");
	}
	
	printf("\nRestart? Press y or Y ");
	scanf(" %c",&restart);
	
	if(restart == 'Y' || restart == 'y')
	{
		goto abdullah;
	}
	else
	{
		exit(0);
	}
}

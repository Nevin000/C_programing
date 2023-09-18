#include <stdio.h>
int main()
{
	int roomNo,noOfdays;
	char accType,cardType;
	float amount,discount;
	
	printf("Enter the type of room : ");
	scanf("%d",&roomNo);
	
	printf("Enter Accommodation Basic (F/H) : ");
	scanf(" %c",&accType);
	
	printf("Enter No of days : ");
	scanf("%d",&noOfdays);
	
	printf("Enter Reward Card Type ( G,S,B ) : ");
	scanf(" %c",&cardType);
	
	while (roomNo != -1)
	{
	if (roomNo == 1)
	{
		if(accType == 'F')
		{
			if (cardType == 'G')
			{
				discount = (25555.00*noOfdays)*12.5/100;
				amount = 25555.00*noOfdays - discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'S')
			{
				discount = (25555.00*noOfdays)*11.5/100;
				amount = 25555.00*noOfdays-discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'B')
			{
				discount = (25555.00*noOfdays)*9.5/100;
				amount = 25555.00*noOfdays -discount;
				printf("Amount : %f",amount);
			}
			else 
			{
				printf("Invalid input");
			}
			
		}
		else if(accType == 'H')
		{
			if (cardType == 'G')
			{
				discount = (17250.00*noOfdays)*12.5/100;
				amount = 17250.00*noOfdays - discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'S')
			{
				discount = (17250.00*noOfdays)*11.5/100;
				amount = 17250.00*noOfdays-discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'B')
			{
				discount = (17250.00*noOfdays)*9.5/100;
				amount = 17250.00*noOfdays -discount;
				printf("Amount : %f",amount);
			}
			else 
			{
				printf("Invalid input");
			}
		}
	}
	if (roomNo == 2)
	{
		if(accType == 'F')
		{
			if (cardType == 'G')
			{
				discount = (17500.00*noOfdays)*12.5/100;
				amount = 17500.00*noOfdays - discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'S')
			{
				discount = (17500.00*noOfdays)*11.5/100;
				amount = 17500.00*noOfdays-discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'B')
			{
				discount = (17500.00*noOfdays) *9.5/100;
				amount = 17500.00*noOfdays -discount;
				printf("Amount : %f",amount);
			}
			else 
			{
				printf("Invalid input");
			}
			
		}
		else if(accType == 'H')
		{
			if (cardType == 'G')
			{
				discount = (12250.00*noOfdays)*12.5/100;
				amount = 12250.00*noOfdays - discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'S')
			{
				discount = (12250.00*noOfdays)*11.5/100;
				amount = 12250.00*noOfdays-discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'B')
			{
				discount = (12250.00*noOfdays) *9.5/100;
				amount = 12250.00*noOfdays -discount;
				printf("Amount : %f",amount);
			}
			else 
			{
				printf("Invalid input");
			}
		}
	}
	if (roomNo == 3)
	{
		if(accType == 'F')
		{
			if (cardType == 'G')
			{
				discount = (9000.00*noOfdays)*12.5/100;
				amount = 9000.00*noOfdays - discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'S')
			{
				discount = (9000.00*noOfdays)*11.5/100;
				amount = 9000.00*noOfdays-discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'B')
			{
				discount = (9000.00*noOfdays) *9.5/100;
				amount = 9000.00*noOfdays -discount;
				printf("Amount : %f",amount);
			}
			else 
			{
				printf("Invalid input");
			}
			
		}
		else if(accType == 'H')
		{
			if (cardType == 'G')
			{
				discount = (7250.00*noOfdays)*12.5/100;
				amount = 7250.00*noOfdays - discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'S')
			{
				discount = (7250.00*noOfdays)*11.5/100;
				amount = 7250.00*noOfdays-discount;
				printf("Amount : %f",amount);
			}
			else if (cardType == 'B')
			{
				discount = (7250.00*noOfdays) *9.5/100;
				amount = 7250.00*noOfdays -discount;
				printf("Amount : %f",amount);
			}
			else 
			{
				printf("Invalid input");
			}
		}
	}
	printf("\nEnter the type of room : ");
	scanf("%d",&roomNo);
	
	printf("Enter Accommodation Basic (F/H) : ");
	scanf(" %c",&accType);
	
	printf("Enter No of days : ");
	scanf("%d",&noOfdays);
	
	printf("Enter Reward Card Type ( G,S,B ) : ");
	scanf(" %c",&cardType);
}	
}

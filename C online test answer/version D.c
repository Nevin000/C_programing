#include<stdio.h>
int main()
{
	int airlineOption,noOfseat,extraOption,totalPrice,extraServicePrice;
	char classType,extraService;
	
	printf("Input Airline Option : ");
	scanf("%d",&airlineOption);
	
	printf("Class type (E/B) : ");
	scanf(" %c",&classType);
	
	printf("Number of seat : ");
	scanf("%d",&noOfseat);
	
	if(airlineOption == 1)
	{
		if (classType == 'E')
		{
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);
			
			while (extraService == 'y')
			{
				printf("Input option : ");
				scanf("%d",&extraOption);
				
				switch (extraOption)
				{
					case 1 : extraServicePrice = extraServicePrice + 7800;
					break;
					
					case 2 : extraServicePrice = extraServicePrice + 1500;
					break;
					
					case 3 : extraServicePrice = extraServicePrice + 19500;
					break;
					
					case 4 : extraServicePrice = extraServicePrice + 2000;
					break;
					
				}
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);	
			}
			totalPrice = 36500*noOfseat+ extraServicePrice;
			printf("Total Price : %d",totalPrice);
		}
		if (classType == 'B')
		{
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);
			
			while (extraService == 'y')
			{
				printf("Input option : ");
				scanf("%d",&extraOption);
				
				switch (extraOption)
				{
					case 1 : extraServicePrice = extraServicePrice + 7800;
					break;
					
					case 2 : extraServicePrice = extraServicePrice + 1500;
					break;
					
					case 3 : extraServicePrice = extraServicePrice + 19500;
					break;
					
					case 4 : extraServicePrice = extraServicePrice + 2000;
					break;
					
				}
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);	
			}
			totalPrice = 77600*noOfseat+ extraServicePrice;
			printf("Total Price : %d",totalPrice);
		}
	}
	if(airlineOption == 2)
	{
		if (classType == 'E')
		{
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);
			
			while (extraService == 'y')
			{
				printf("Input option : ");
				scanf("%d",&extraOption);
				
				switch (extraOption)
				{
					case 1 : extraServicePrice = extraServicePrice + 7800;
					break;
					
					case 2 : extraServicePrice = extraServicePrice + 1500;
					break;
					
					case 3 : extraServicePrice = extraServicePrice + 19500;
					break;
					
					case 4 : extraServicePrice = extraServicePrice + 2000;
					break;
					
				}
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);	
			}
			totalPrice = 35800*noOfseat+ extraServicePrice;
			printf("Total Price : %d",totalPrice);
		}
		if (classType == 'B')
		{
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);
			
			while (extraService == 'y')
			{
				printf("Input option : ");
				scanf("%d",&extraOption);
				
				switch (extraOption)
				{
					case 1 : extraServicePrice = extraServicePrice + 7800;
					break;
					
					case 2 : extraServicePrice = extraServicePrice + 1500;
					break;
					
					case 3 : extraServicePrice = extraServicePrice + 19500;
					break;
					
					case 4 : extraServicePrice = extraServicePrice + 2000;
					break;
					
				}
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);	
			}
			totalPrice = 76500*noOfseat+ extraServicePrice;
			printf("Total Price : %d",totalPrice);
		}
	}
	if(airlineOption == 3)
	{
		if (classType == 'E')
		{
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);
			
			while (extraService == 'y')
			{
				printf("Input option : ");
				scanf("%d",&extraOption);
				
				switch (extraOption)
				{
					case 1 : extraServicePrice = extraServicePrice + 7800;
					break;
					
					case 2 : extraServicePrice = extraServicePrice + 1500;
					break;
					
					case 3 : extraServicePrice = extraServicePrice + 19500;
					break;
					
					case 4 : extraServicePrice = extraServicePrice + 2000;
					break;
					
				}
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);	
			}
			totalPrice = 54600*noOfseat+ extraServicePrice;
			printf("Total Price : %d",totalPrice);
		}
		if (classType == 'B')
		{
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);
			
			while (extraService == 'y')
			{
				printf("Input option : ");
				scanf("%d",&extraOption);
				
				switch (extraOption)
				{
					case 1 : extraServicePrice = extraServicePrice + 7800;
					break;
					
					case 2 : extraServicePrice = extraServicePrice + 1500;
					break;
					
					case 3 : extraServicePrice = extraServicePrice + 19500;
					break;
					
					case 4 : extraServicePrice = extraServicePrice + 2000;
					break;
					
				}
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);	
			}
			totalPrice = 84700*noOfseat+ extraServicePrice;
			printf("Total Price : %d",totalPrice);
		}
	}
	if(airlineOption == 4)
	{
		if (classType == 'E')
		{
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);
			
			while (extraService == 'y')
			{
				printf("Input option : ");
				scanf("%d",&extraOption);
				
				switch (extraOption)
				{
					case 1 : extraServicePrice = extraServicePrice + 7800;
					break;
					
					case 2 : extraServicePrice = extraServicePrice + 1500;
					break;
					
					case 3 : extraServicePrice = extraServicePrice + 19500;
					break;
					
					case 4 : extraServicePrice = extraServicePrice + 2000;
					break;
					
				}
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);	
			}
			totalPrice = 28500*noOfseat+ extraServicePrice;
			printf("Total Price : %d",totalPrice);
		}
		if (classType == 'B')
		{
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);
			
			while (extraService == 'y')
			{
				printf("Input option : ");
				scanf("%d",&extraOption);
				
				switch (extraOption)
				{
					case 1 : extraServicePrice = extraServicePrice + 7800;
					break;
					
					case 2 : extraServicePrice = extraServicePrice + 1500;
					break;
					
					case 3 : extraServicePrice = extraServicePrice + 19500;
					break;
					
					case 4 : extraServicePrice = extraServicePrice + 2000;
					break;
					
				}
			printf("Do you need any extra service (y/n) : ");
			scanf(" %c",&extraService);	
			}
			totalPrice = 42800*noOfseat+ extraServicePrice;
			printf("Total Price : %d",totalPrice);
		}
	}
}

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
			
			while (extraService != 'y')
			{
				printf("Input option : ");
				scanf("%d",&extraOption);
				
				switch (extraService)
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
			totalPrice = extraServicePrice + 36500*noOfseat;
		}
	}
}

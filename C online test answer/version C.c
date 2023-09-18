#include <stdio.h>
int main()
{
	int pizzaOption,noOfpizza,topOption,TotalPrice,topOptionPrice;
	char extraTop,sizeOfpizza;
	
	printf("Input Pizza Option : ");
	scanf("%d",&pizzaOption);
	
	printf("Size of the pizza : ");
	scanf(" %c",&sizeOfpizza);
	
	printf("Number of Pizza : ");
	scanf("%d",&noOfpizza);
	
	if (pizzaOption == 1)
	{
		if(sizeOfpizza == 'P')
		{
			printf("Do you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
			
			while(extraTop == 'y')
			{
			
			printf("input your option : ");
			scanf("%d",&topOption);
	        
			switch (topOption)
			{
				case 1 : topOptionPrice = topOptionPrice+320*noOfpizza;
				break;
				case 2 : topOptionPrice = topOptionPrice+140*noOfpizza;
				break;
				case 3 : topOptionPrice = topOptionPrice+130*noOfpizza;
				break;
				case 4 : topOptionPrice = topOptionPrice+150*noOfpizza;
				break;	
			}
			
			printf("\nDo you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
		}
			TotalPrice = 560*noOfpizza+topOptionPrice;
			printf("Total Price : %d",TotalPrice);
		}
		if(sizeOfpizza == 'M')
		{
			printf("Do you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
			
			while(extraTop == 'y')
			{
			
			printf("input your option : ");
			scanf("%d",&topOption);
	        
			switch (topOption)
			{
				case 1 : topOptionPrice = topOptionPrice+320*noOfpizza;
				break;
				case 2 : topOptionPrice = topOptionPrice+140*noOfpizza;
				break;
				case 3 : topOptionPrice = topOptionPrice+130*noOfpizza;
				break;
				case 4 : topOptionPrice = topOptionPrice+150*noOfpizza;
				break;	
			}
			
			printf("\nDo you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
		}
			TotalPrice = 920*noOfpizza+topOptionPrice;
			printf("Total Price : %d",TotalPrice);
		}
		if(sizeOfpizza == 'L')
		{
			printf("Do you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
			
			while(extraTop == 'y')
			{
			
			printf("input your option : ");
			scanf("%d",&topOption);
	        
			switch (topOption)
			{
				case 1 : topOptionPrice = topOptionPrice+320*noOfpizza;
				break;
				case 2 : topOptionPrice = topOptionPrice+140*noOfpizza;
				break;
				case 3 : topOptionPrice = topOptionPrice+130*noOfpizza;
				break;
				case 4 : topOptionPrice = topOptionPrice+150*noOfpizza;
				break;	
			}
			
			printf("\nDo you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
		}
			TotalPrice = 1800*noOfpizza+topOptionPrice;
			printf("Total Price : %d",TotalPrice);
		}
	
	}
	if (pizzaOption == 2)
	{
		if(sizeOfpizza == 'P')
		{
			printf("Do you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
			
			while(extraTop == 'y')
			{
			
			printf("input your option : ");
			scanf("%d",&topOption);
	        
			switch (topOption)
			{
				case 1 : topOptionPrice = topOptionPrice+320*noOfpizza;
				break;
				case 2 : topOptionPrice = topOptionPrice+140*noOfpizza;
				break;
				case 3 : topOptionPrice = topOptionPrice+130*noOfpizza;
				break;
				case 4 : topOptionPrice = topOptionPrice+150*noOfpizza;
				break;	
			}
			
			printf("\nDo you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
		}
			TotalPrice = 340*noOfpizza+topOptionPrice;
			printf("Total Price : %d",TotalPrice);
		}
		if(sizeOfpizza == 'M')
		{
			printf("Do you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
			
			while(extraTop == 'y')
			{
			
			printf("input your option : ");
			scanf("%d",&topOption);
	        
			switch (topOption)
			{
				case 1 : topOptionPrice = topOptionPrice+320*noOfpizza;
				break;
				case 2 : topOptionPrice = topOptionPrice+140*noOfpizza;
				break;
				case 3 : topOptionPrice = topOptionPrice+130*noOfpizza;
				break;
				case 4 : topOptionPrice = topOptionPrice+150*noOfpizza;
				break;	
			}
			
			printf("\nDo you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
		}
			TotalPrice = 660*noOfpizza+topOptionPrice;
			printf("Total Price : %d",TotalPrice);
		}
		if(sizeOfpizza == 'L')
		{
			printf("Do you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
			
			while(extraTop == 'y')
			{
			
			printf("input your option : ");
			scanf("%d",&topOption);
	        
			switch (topOption)
			{
				case 1 : topOptionPrice = topOptionPrice+320*noOfpizza;
				break;
				case 2 : topOptionPrice = topOptionPrice+140*noOfpizza;
				break;
				case 3 : topOptionPrice = topOptionPrice+130*noOfpizza;
				break;
				case 4 : topOptionPrice = topOptionPrice+150*noOfpizza;
				break;	
			}
			
			printf("\nDo you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
		}
			TotalPrice = 1300*noOfpizza+topOptionPrice;
			printf("Total Price : %d",TotalPrice);
		}
	
	}
	if (pizzaOption == 3)
	{
		if(sizeOfpizza == 'P')
		{
			printf("Do you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
			
			while(extraTop == 'y')
			{
			
			printf("input your option : ");
			scanf("%d",&topOption);
	        
			switch (topOption)
			{
				case 1 : topOptionPrice = topOptionPrice+320*noOfpizza;
				break;
				case 2 : topOptionPrice = topOptionPrice+140*noOfpizza;
				break;
				case 3 : topOptionPrice = topOptionPrice+130*noOfpizza;
				break;
				case 4 : topOptionPrice = topOptionPrice+150*noOfpizza;
				break;	
			}
			
			printf("\nDo you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
		}
			TotalPrice = 760*noOfpizza+topOptionPrice;
			printf("Total Price : %d",TotalPrice);
		}
		if(sizeOfpizza == 'M')
		{
			printf("Do you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
			
			while(extraTop == 'y')
			{
			
			printf("input your option : ");
			scanf("%d",&topOption);
	        
			switch (topOption)
			{
				case 1 : topOptionPrice = topOptionPrice+320*noOfpizza;
				break;
				case 2 : topOptionPrice = topOptionPrice+140*noOfpizza;
				break;
				case 3 : topOptionPrice = topOptionPrice+130*noOfpizza;
				break;
				case 4 : topOptionPrice = topOptionPrice+150*noOfpizza;
				break;	
			}
			
			printf("\nDo you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
		}
			TotalPrice = 1100*noOfpizza+topOptionPrice;
			printf("Total Price : %d",TotalPrice);
		}
		if(sizeOfpizza == 'L')
		{
			printf("Do you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
			
			while(extraTop == 'y')
			{
			
			printf("input your option : ");
			scanf("%d",&topOption);
	        
			switch (topOption)
			{
				case 1 : topOptionPrice = topOptionPrice+320*noOfpizza;
				break;
				case 2 : topOptionPrice = topOptionPrice+140*noOfpizza;
				break;
				case 3 : topOptionPrice = topOptionPrice+130*noOfpizza;
				break;
				case 4 : topOptionPrice = topOptionPrice+150*noOfpizza;
				break;	
			}
			
			printf("\nDo you need any extra topping (y/n) : ");
			scanf(" %c",&extraTop);
		}
			TotalPrice = 2100*noOfpizza+topOptionPrice;
			printf("Total Price : %d",TotalPrice);
		}
	
	}
}

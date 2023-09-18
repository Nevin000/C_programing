#include<stdio.h>
int main()
{
	int roomOption,numOfguest,numOfdays,addOption,addOptionPrice;
	float totalPrice;
	char addTour;
	
	printf("Input Room Option : ");
	scanf("%d",&roomOption);
	
	printf("Number of guest : ");
	scanf("%d",&numOfguest);
	
	printf("Number of days : ");
	scanf("%d",&numOfdays);
	
	if(roomOption == 1)
	{
		if(numOfguest == 2)
		{
			printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			while(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
			
		    switch (addOption)
		    {
			case 1 : addOptionPrice = addOptionPrice+3500*numOfguest;
					 break;
					 
			case 2 : addOptionPrice = addOptionPrice+1000*numOfguest;
					 break;
					 
			case 3 : addOptionPrice = addOptionPrice+1500*numOfguest;
					 break;
					 
			case 4 : addOptionPrice = addOptionPrice+2000*numOfguest;
					 break;
		}
		printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
		}
		totalPrice = 45000*numOfdays*numOfguest+addOptionPrice;
		printf("Total Price : %.2f",totalPrice);
			
		}
		if(numOfguest>=3 && numOfguest <=5 )
		{
			printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			while(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
			
		    switch (addOption)
		    {
			case 1 : addOptionPrice = addOptionPrice+3500*numOfguest;
					 break;
					 
			case 2 : addOptionPrice = addOptionPrice+1000*numOfguest;
					 break;
					 
			case 3 : addOptionPrice = addOptionPrice+1500*numOfguest;
					 break;
					 
			case 4 : addOptionPrice = addOptionPrice+2000*numOfguest;
					 break;
		}
		printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
		}
		totalPrice = 44000*numOfdays*numOfguest+addOptionPrice;
		printf("Total Price : %.2f",totalPrice);
			
		}
		if(numOfguest>5)
		{
			printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			while(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
			
		    switch (addOption)
		    {
			case 1 : addOptionPrice = addOptionPrice+3500*numOfguest;
					 break;
					 
			case 2 : addOptionPrice = addOptionPrice+1000*numOfguest;
					 break;
					 
			case 3 : addOptionPrice = addOptionPrice+1500*numOfguest;
					 break;
					 
			case 4 : addOptionPrice = addOptionPrice+2000*numOfguest;
					 break;
		}
		printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
		}
		totalPrice = 43000*numOfdays*numOfguest+addOptionPrice;
		printf("Total Price : %.2f",totalPrice);
			
		}
	}
		if(roomOption == 2)
	{
		if(numOfguest == 2)
		{
			printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			while(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
			
		    switch (addOption)
		    {
			case 1 : addOptionPrice = addOptionPrice+3500*numOfguest;
					 break;
					 
			case 2 : addOptionPrice = addOptionPrice+1000*numOfguest;
					 break;
					 
			case 3 : addOptionPrice = addOptionPrice+1500*numOfguest;
					 break;
					 
			case 4 : addOptionPrice = addOptionPrice+2000*numOfguest;
					 break;
		}
		printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
		}
		totalPrice = 40000*numOfdays*numOfguest+addOptionPrice;
		printf("Total Price : %.2f",totalPrice);
			
		}
		if(numOfguest>=3 && numOfguest <=5 )
		{
			printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			while(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
			
		    switch (addOption)
		    {
			case 1 : addOptionPrice = addOptionPrice+3500*numOfguest;
					 break;
					 
			case 2 : addOptionPrice = addOptionPrice+1000*numOfguest;
					 break;
					 
			case 3 : addOptionPrice = addOptionPrice+1500*numOfguest;
					 break;
					 
			case 4 : addOptionPrice = addOptionPrice+2000*numOfguest;
					 break;
		}
		printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
		}
		totalPrice = 38000*numOfdays*numOfguest+addOptionPrice;
		printf("Total Price : %.2f",totalPrice);
			
		}
		if(numOfguest>5)
		{
			printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			while(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
			
		    switch (addOption)
		    {
			case 1 : addOptionPrice = addOptionPrice+3500*numOfguest;
					 break;
					 
			case 2 : addOptionPrice = addOptionPrice+1000*numOfguest;
					 break;
					 
			case 3 : addOptionPrice = addOptionPrice+1500*numOfguest;
					 break;
					 
			case 4 : addOptionPrice = addOptionPrice+2000*numOfguest;
					 break;
		}
		printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
		}
		totalPrice = 35000*numOfdays*numOfguest+addOptionPrice;
		printf("Total Price : %.2f",totalPrice);
			
		}
	}
		if(roomOption == 3)
	{
		if(numOfguest == 2)
		{
			printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			while(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
			
		    switch (addOption)
		    {
			case 1 : addOptionPrice = addOptionPrice+3500*numOfguest;
					 break;
					 
			case 2 : addOptionPrice = addOptionPrice+1000*numOfguest;
					 break;
					 
			case 3 : addOptionPrice = addOptionPrice+1500*numOfguest;
					 break;
					 
			case 4 : addOptionPrice = addOptionPrice+2000*numOfguest;
					 break;
		}
		printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
		}
		totalPrice = 37500*numOfdays*numOfguest+addOptionPrice;
		printf("Total Price : %.2f",totalPrice);
			
		}
		if(numOfguest>=3 && numOfguest <=5 )
		{
			printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			while(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
			
		    switch (addOption)
		    {
			case 1 : addOptionPrice = addOptionPrice+3500*numOfguest;
					 break;
					 
			case 2 : addOptionPrice = addOptionPrice+1000*numOfguest;
					 break;
					 
			case 3 : addOptionPrice = addOptionPrice+1500*numOfguest;
					 break;
					 
			case 4 : addOptionPrice = addOptionPrice+2000*numOfguest;
					 break;
		}
		printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
		}
		totalPrice = 35000*numOfdays*numOfguest+addOptionPrice;
		printf("Total Price : %.2f",totalPrice);
			
		}
		if(numOfguest>5)
		{
			printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			while(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
			
		    switch (addOption)
		    {
			case 1 : addOptionPrice = addOptionPrice+3500*numOfguest;
					 break;
					 
			case 2 : addOptionPrice = addOptionPrice+1000*numOfguest;
					 break;
					 
			case 3 : addOptionPrice = addOptionPrice+1500*numOfguest;
					 break;
					 
			case 4 : addOptionPrice = addOptionPrice+2000*numOfguest;
					 break;
		}
		printf("Do you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
		}
		totalPrice = 32000*numOfdays*numOfguest+addOptionPrice;
		printf("Total Price : %.2f",totalPrice);
			
		}
	}
}

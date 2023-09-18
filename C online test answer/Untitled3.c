#include<stdio.h>
int main()
{
	int roomOption,numOfguest,numOfdays,addOption, totalPrice,addOptionPrice=0;
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
			while(addTour != 'n')
			{
			printf("\nDo you need any additional tour (y/n) : ");
			scanf(" %c",&addTour);
			
			if(addTour == 'y')
			{
				printf("Input your option : ");
				scanf("%d",&addOption);
				
				if(addOption ==1)
				{
					addOptionPrice = (45000+3500)*numOfguest*numOfdays;
					
				}
				else if(addOption ==2)
				{
					addOptionPrice = (45000+1000)*numOfguest*numOfdays;
			
				}
				else if(addOption ==3)
				{
					addOptionPrice = (45000+1500)*numOfguest*numOfdays;
					
				}
				else if(addOption ==4)
				{
					addOptionPrice = (45000+2000)*numOfguest*numOfdays;
					
				}
		}
			 else if (addTour == 'n');
			{
				printf("Total price : %d",addOptionPrice);
			}
			}
			}
		
	}
}
		

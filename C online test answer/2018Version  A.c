#include<stdio.h>
int main()
{
	int itemCode;
	char customerType;
	float price=0,Fprice=0,Lprice=0,totalBill=0,Tprice =0;
	
	printf("Please input the customer type (L/H) : ");
	scanf(" %c",&customerType);
	
	if (customerType == 'L'|| customerType == 'N')
	{
	printf("Item code : ");
	scanf("%d",&itemCode);
	
	while(itemCode != -1)
	{
	switch (itemCode)
	{
		case 1 :
			if (customerType == 'L')
			{
				printf("Price : ");
				scanf("%f",&price);
				
				Lprice = price*7/100.00;
				Fprice = price +Tprice-Lprice;
				break;
			}	
			else if  (customerType == 'N');
			{
				printf("Price : ");
				scanf("%f",&price);
				
				Lprice = price*5/100.00;
				Fprice = price+Tprice-Lprice;
				break;
			}
			
			
			break;
		case 2 :
			if (customerType == 'L')
			{
				printf("Price : ");
				scanf("%f",&price);
				
				Lprice = price*5/100.00;
				Fprice = price+Tprice-Lprice;
				break;
			}	
		
			
			else  (customerType == 'N');
			{
				printf("Price : ");
				scanf("%f",&price);
				
				Lprice = price*3/100.00;
				Fprice = price+Tprice-Lprice;
				break;
			}
			break;
		case 3 :
			if (customerType == 'L')
			{
				printf("Price : ");
				scanf("%f",&price);
				
				Lprice = price*8/100.00;
				Fprice = price+Tprice-Lprice;
				break;
			}	
		
			
			else  (customerType == 'N');
			{
				printf("Price : ");
				scanf("%f",&price);
				
				Lprice = price*6/100.00;
				Fprice = price +Tprice-Lprice;
				break;
			}
			break;
		default :
		{
			    printf("Price : ");
				scanf("%f",&price);
				
				Fprice = price +Tprice ;
				break;
		 } 
		 break;
		
		}
			Tprice = Fprice; 
			
			printf("Item code : ");
			scanf("%d",&itemCode);
			
}
	totalBill = Fprice;
	printf("Total Bill : %.2f",totalBill);
}
	else {
		printf ("Invalid Input");
	}
		
			
}

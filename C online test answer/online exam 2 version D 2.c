#include <stdio.h>
float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemNo, int quantity, float totalCost);

int main()
{
	int itemNo,quantity;
	float totalCost;
	
	printf( "Enter itemNo : ");
	scanf( "%d",&itemNo);
	
	printf( "Enter the quantity : ");
	scanf( "%d",&quantity);
	
	printDetails(itemNo,quantity,calculateTotalCost(itemNo,quantity) );	
}
float calculateTotalCost(int itemNo, int quantity)
{
	if (itemNo == 1)
	{
		return 100 * quantity;
	}
	else if (itemNo == 2)
	{
		return 200 * quantity;
	}
	else if (itemNo == 3)
	{
		return 300 * quantity;
	}
}
void printDetails(int itemNo, int quantity, float totalCost)
{
	printf( "Item No : %d\nQuantity : %d\nTotal Cost : %.2f",itemNo,quantity,totalCost);
}

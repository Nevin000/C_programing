#include <stdio.h>
float getDiscountPrice(int noOfGuest, float chargePerGuest);
float getAmount (int noOfGuest, float chargePerGuest,float discount);

int main()
{
	int noOfGuest;
	float chargePerGuest,amount,discount;
	
	printf( "Enter no of guest : ");
	scanf( "%d",&noOfGuest);
	
	printf( "Enter charge per guest : ");
	scanf( "%f",&chargePerGuest);
	
	discount = getDiscountPrice(noOfGuest,chargePerGuest);
	printf( "Discount : %.2f\n",discount);
	
	amount = getAmount(noOfGuest,chargePerGuest,discount);
	printf( "Amount to be paid : %.2f",amount);
	
	return 0;

}
float getDiscountPrice(int noOfGuest, float chargePerGuest)
{
	if (noOfGuest >=200)
	{
		return noOfGuest * chargePerGuest * 10/100.0;
	}
	else 
	{
		return noOfGuest * chargePerGuest *0;
	}
}
float getAmount (int noOfGuest, float chargePerGuest,float discount)
{
	if (noOfGuest >=200)
	{
		return (noOfGuest * chargePerGuest )- discount;
	}
	else 
	{
		return noOfGuest * chargePerGuest;
	}
}

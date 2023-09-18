#include<stdio.h>
#include<assert.h>
double calculateAmount(int type, double initial);
void printDetails(int type, double initial, double balance);
int checkEligibility(double balance);
void test_checkEligibility();
int main()
{
	int type;
	double initial,balance,bal;
	
	printf( "Enter type : ");
	scanf( "%d",&type);
	
	printf( "Enter initial amount : ");
	scanf( "%lf",&initial);
	
	printDetails(type,initial,balance);
	
	test_checkEligibility();
	
	//checkEligibility(balance);
	printf( "\nCheck eligibility : %d",checkEligibility(balance));
	
	return 0;
}
double calculateAmount(int type, double initial)
{
	if(type == 1)
	{
		return initial+initial*4/100;
	}
	else if (type == 2)
	{
		return initial+initial*7/100;
	}
	else if(type == 3)
	{
		return initial+initial*7/100;
	}

}
int checkEligibility(double balance)
{
	double initial;
	if(initial>=5000)
	{
		return 1;
	}
	else if (initial<5000)
	{
		return 2;
	}
}
void printDetails(int type, double initial, double balance)
{
	printf( "Amount : %lf",calculateAmount(type,initial));
}
void test_checkEligibility()
{
	assert(checkEligibility(5000) == 1);
}


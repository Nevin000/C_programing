#include <stdio.h>
int main ()
{
	int numOfhours,salary,tax,hourRate;
	char empCategory,nextTime;
	
	do
	{
		printf("Employee category : ");
		scanf(" %c",&empCategory);
		
		if(empCategory == 'A')
		{
			printf("Number of hours : ");
			scanf("%d",&numOfhours);
	
			salary = 600*numOfhours;
			printf("Salary is : %d",salary);
			
			if (salary < 25000)
			{
				tax=0;
				printf("\nTax : %d",tax);
			}
			else if (salary >=25000 && salary < 50000)
			{
				tax = salary*2/100;
				printf("\nTax : %d",tax);
			}
			else if (salary >=50000)
			{
				tax = salary*4/100;
				printf("\nTax : %d",tax);
			}
		}
		printf("\nWants to calculate the salary of more employee : ");
		scanf(" %c",&nextTime);
		
		printf("Employee category : ");
	scanf(" %c",&empCategory);
	}while (nextTime == 'y');
	
	do
	{
		printf("Employee category : ");
		scanf(" %c",&empCategory);
		
		if(empCategory == 'B')
		{
			printf("Number of hours : ");
			scanf("%d",&numOfhours);
	
			salary = 450*numOfhours;
			printf("Salary is : %d",salary);
			
			if (salary < 25000)
			{
				tax=0;
				printf("\nTax : %d",tax);
			}
			else if (salary >=25000 && salary < 50000)
			{
				tax = salary*2/100;
				printf("\nTax : %d",tax);
			}
			else if (salary >=50000)
			{
				tax = salary*4/100;
				printf("\nTax : %d",tax);
			}
		}
		printf("\nWants to calculate the salary of more employee : ");
		scanf(" %c",&nextTime);
		
		printf("Employee category : ");
	scanf(" %c",&empCategory);
	}while (nextTime == 'y');
	
		do
	{
		printf("Employee category : ");
		scanf(" %c",&empCategory);
		
		if(empCategory == 'C')
		{
			printf("Number of hours : ");
			scanf("%d",&numOfhours);
	
			salary = 300*numOfhours;
			printf("Salary is : %d",salary);
			
			if (salary < 25000)
			{
				tax=0;
				printf("\nTax : %d",tax);
			}
			else if (salary >=25000 && salary < 50000)
			{
				tax = salary*2/100;
				printf("\nTax : %d",tax);
			}
			else if (salary >=50000)
			{
				tax = salary*4/100;
				printf("\nTax : %d",tax);
			}
		}
		printf("\nWants to calculate the salary of more employee : ");
		scanf(" %c",&nextTime);
		
		printf("Employee category : ");
	scanf(" %c",&empCategory);
	}while (nextTime == 'y');
	
		
	
	
}

#include<stdio.h>
struct Employee{
	int Employee_ID;
	char name[20];
	int experience_in_year;
	int salary;
}Employee[3];
int main()
{
	int i;
	int n=1;
	
	for(i=0;i<n;i++)
	{
		printf("Employee ID : ");
		scanf("%d",&Employee[i].Employee_ID);
		
		printf("Name : ");
		scanf("%s",&Employee[i].name);
		
		printf("Experience in year : ");
		scanf("%d",&Employee[i].experience_in_year);
		
		printf("Salary : ");
		scanf("%d",&Employee[i].salary);
		
	}
	printf("%s%13s%17s","Employee ID","Name","increment\n");
	
	for(i=0;i<n;++i)
	{
		if(Employee[i].experience_in_year>=2)
		{
			Employee[i].salary = Employee[i].salary - Employee[i].salary*10/100.0;
		}
	
		else
		{
			Employee[i].salary = Employee[i].salary;
		}
	}
	for(i=0;i<n;++i)
	{
		printf("%7d",Employee[i].Employee_ID);
		
		printf("%17s",Employee[i].name);
		
		printf("%17d",Employee[i].salary);

	}
}

#include <stdio.h>
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

int main ()
{
	int grade;
	float hrsWorked,salary,weekSalary;
	
	printf( "Enter grade : ");
	scanf( "%d",&grade);
	
	/*if(grade == 1 || grade == 2 || grade == 3)
	{*/
	printf( "Enter no of hours worked for the week : ");
	scanf( "%f",&hrsWorked);
	
	printDetails(grade,hrsWorked,calculateWeeklySalary(grade,hrsWorked));

	/*else 
	printf( "Invalid Grade");*/
	
	
}
float calculateWeeklySalary(int grade, float hrsWorked)
{
	if (grade == 1)
	{
		return hrsWorked * 100 ;
	}
	else if (grade == 2)
	{
		return hrsWorked *200 ;
	}
	else if (grade == 3)
	{
		return hrsWorked * 300 ;
	}
		
}
void printDetails(int grade, float hrsWorked, float salary)
{
	printf( "Grade : %d\nHrs Worked : %.2f\nWeekly Salary : %.2f",grade,hrsWorked,salary);	
}


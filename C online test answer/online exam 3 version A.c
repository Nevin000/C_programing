#include<stdio.h>
int main()
{
	int numArr[6];
	int oddNum[6];
	int evanNum[6];
	int i,n=0,m=0;
	
	for (i=0;i<6;i++)
	{
		printf("Enter Number %d: ",(i+1));
		scanf("%d",&numArr[i]);
	}
	for (i=0;i<6;i++)
	{
		if(numArr[i]%2 == 1)
		{
			oddNum[n]= numArr[i];
			n++;
		}
		if(numArr[i]%2 == 0)
		{
			evanNum[m]= numArr[i];
			m++;
		}
	}
	
	printf("Odd Number : ");
	
	for (i=0;i<n;i++)
	{
		printf("%d ",oddNum[i]);
	}
	
	printf("\nEven Numbers : ");
	
	for (i=0;i<m;i++)
	{
		printf("%d ",evanNum[i]);
	}
}

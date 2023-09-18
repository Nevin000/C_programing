#include<stdio.h>
int main()
{
	int num[8];
	int newNum[8];
	int i,n=0;
	int count=0;
	
	for(i=0;i<8;i++)
	{
		printf("Enter Number %d : ",(i+1));
		scanf("%d",&num[i]);
		
		if (num[i]>=1 && num[i]<=4)
		{
			newNum[n]=num[i];
			n++;
			
		}
		else
		{
			printf("Invalid Input\n");
			i--;
		}
	}
	
	printf("Num Arrays : ");
	for(i=0;i<8;i++)
	{
		printf("%d ",newNum[i]);
	}
	printf("\nNumber of times the pattern 1 3 appear: ");
	for(i=0;i<8;i++)
	{
		if(newNum[i]==1 && newNum[i+1]== 3)
		{
			count = count+1;
		}
	}
	printf("%d",count);
}

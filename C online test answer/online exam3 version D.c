#include<stdio.h>
int main()
{
	int num[8];
	int newNum[8];
	int i,n=0;
	
	
	
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
			printf("Enter Number %d : ",(i+1));
			scanf("%d",&num[i]);
			
		}
	}
	
	printf("Num Arrays : ");
	for(i=0;i<8;i++)
	{
		printf("%d ",newNum[i]);
	}
}

#include<stdio.h>
int main()
{
	int arrNum[6];
	int i;
	int count =0;
	
	printf("Enter values to the Array : \n");
	
	for(i=0;i<6;i++)
	{
		scanf("%d",&arrNum[i]);
	}
	for(i=0;i<6;++i)
	{
		if(arrNum[i]>arrNum[i+1])
		{
			count = count+1;
		}
	}
	if(count==6)
	{
		printf("Numbers are stored in ascending order\n");
				
	}
	else 
	{
		printf("Numbers are not stored in ascending order\n");
				
	}
}

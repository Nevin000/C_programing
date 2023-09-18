#include<stdio.h>
int main()
{
	int myArray[10];
	int largeNum[10];
	int i,total = 0;
	float avg =0;
	
	printf("Enter the number series : \n");
	
	for(i=0;i<10;++i)
	{
		scanf("%d",&myArray[i]);
	}
	for(i=0;i<10;++i)
	{
		total = total + myArray[i];
	}
	avg = (float) total/10;
	printf ("Average : %.2f",avg);
	
	printf("\nmyArray : ");
	for(i=0;i<10;++i)
	{
		printf("%d ",myArray[i]);
	}
	
	printf("\nlargeNum : ");
	
	for(i=0;i<10;++i)
	{
		if(myArray[i]>avg)
		{
			printf("%d ",myArray[i]);	
		}
	}
}

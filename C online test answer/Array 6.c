#include<stdio.h>
int main()
{
	int i,j,n;
	int sum=0;
	
	printf("Input the size of the square matrix : ");
	scanf("%d",&n);
	
	int a[n][n];
	
	printf("elements in the first matrix : \n");
	
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("element - [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Addition of the right Diagonal elements is : ");
	
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			if(i==j)
			{
				sum =  sum+a[i][j];
			}
		}
	}
	printf("%d",sum);	
}

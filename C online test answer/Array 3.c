#include<stdio.h>
int main()
{
	int i,j,n;
	//int a1[2][2];
	//int a2[2][2];
	
	printf("Input the size of the square matrix(less than 5): ");
	scanf("%d",&n);
	
	int a1[n][n];
	int a2[n][n];
	
	if(n>0 && n<5)
	{
		printf("Input element in the first matrix : \n");
		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
			{
				printf("element - [%d][%d] : ",i,j);
				scanf("%d",&a1[i][j]);
			}
		}
		printf("Input element in the second matrix : \n");
		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
			{
				printf("element - [%d][%d] : ",i,j);
				scanf("%d",&a2[i][j]);
			}
		}
		printf("The first matrix is : \n");
		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
			{
				
				printf("%d ",a1[i][j]);
			}
			printf("\n");
		}
		printf("The Second matrix is : \n");
		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
			{
				printf("%d ",a2[i][j]);
			}
			printf("\n");
		}
		printf("The Subtraction of two matrix is : \n");
		for(i=0;i<n;++i)
		{
			for(j=0;j<n;++j)
			{
				printf("%d ",a1[i][j]-a2[i][j]);
			}
			printf("\n");
		}
	}
}

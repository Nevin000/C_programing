#include<stdio.h>
int main()
{
	int i,j,n;
	int transpose[10][10];
	
	printf("Input the rows and columns of the matrix : ");
	scanf("%d %d",&n,&n);
	
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
	printf("The matrix is : \n");
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of a matrix is : \n");
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			transpose[j][i]=a[i][j];
		}
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
	
}

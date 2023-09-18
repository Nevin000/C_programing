#include<stdio.h>
int main()
{
	int i,j,n,m,k;
	int multi[10][10];
	
	printf("Input the rows and columns of first matrix : ");
	scanf("%d %d",&n,&n);
	
	int a1[n][n];
	
	printf("Input the rows and columns of second matrix : ");
	scanf("%d %d",&m,&m);
	
	int a2[m][m];
	
	printf("Input elements in the first matrix : \n");
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("element - [%d][%d] : ",i,j);
			scanf("%d",&a1[i][j]);
			
		}
	}
	printf("Input elements in the second matrix : \n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<m;++j)
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
	printf("The second matrix is : \n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<m;++j)
		{
			printf("%d ",a2[i][j]);
		}
		printf("\n");
	}
	if(n==m)
	{
	printf("The multiplication of two matrix is : \n");
	for(i=0;i<n || i<m;++i)
	{
		for(j=0;j<n || j<m;++j)
		{
			multi[i][j]=0;
			for(k=0;k<n || k<m;++k)
			{
				multi[i][j]+=a1[i][k]*a2[k][j];
			}
		}
		
	}
	for(i=0;i<n || i<m;++i)
	{
		for(j=0;j<n||j<m;++j)
		{
			printf("%d ",multi[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
		printf("Invalid");
	}
}

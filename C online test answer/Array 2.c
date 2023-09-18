#include<stdio.h>
int main()
{
	int i,j;
	int a1[2][2]={{1,2},{3,4}};
	int a2[2][2]={{5,6},{7,8}};
	
	
	printf("The First matrix is : \n");
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
	printf("The Second matrix is : \n");
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			printf("%d ",a2[i][j]);
		}
		printf("\n");
	}
	printf("The Addition of two matrix is : \n");
	for(i=0;i<1;++i)
	{
		for(j=0;j<2;++j)
		{
			printf("%d ",a1[i][j]+a2[i][j]);
		}
		
	}
}

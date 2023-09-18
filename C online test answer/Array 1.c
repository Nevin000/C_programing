#include<stdio.h>
int main()
{
	int i,j,k;
	int a1[3][3]={1,2,3};
	int a2[3][3]={4,5,6};
	int a3[3][3]={7,8,9};
	
	
	for(i=0;i<1;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<1;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d ",a2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<1;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%d ",a3[i][j]);
		}
		printf("\n");
	}
}

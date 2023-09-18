#include<stdio.h>
int main ()
{
	int num,range,count,numxcount;
	
	printf( "Enter the number : ");
	scanf( "%d",&num);
	
	printf( "Enter the range : ");
	scanf( "%d",&range);
	
	for(count = 1;count <=range;count++)
	{
		 numxcount = num*count;
		 printf("%d * %d = %d\n",num,count,numxcount);
	}
}

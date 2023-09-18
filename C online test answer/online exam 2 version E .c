#include <stdio.h>
int main ()
{
	int mark,minmark,maxmark;
	
		printf( "Enter series of mark,-99 to end : ");
		scanf( "%d",&mark);
		
		minmark=mark;
		maxmark=mark;
	while (mark != -99)
	{
		/*printf( "Enter series of mark,-99 to end : ");
		scanf( "%d",&mark);*/
		
		
	
		if (mark<0 || mark>100)
		{
			printf( "Invalide Mark\n");
			continue;
			
			printf( "Enter series of mark,-99 to end : ");
		scanf( "%d",&mark);
	}
			if (minmark>mark)
		{
			minmark=mark;
		}
			if (maxmark<mark);
		{
			maxmark=mark;
		}
			printf( "Enter series of mark,-99 to end : ");
		scanf( "%d",&mark);
}
	printf( "Min Mark : %d\n",minmark);
	printf( "Max Mark : %d",maxmark);

	return 0;	
}


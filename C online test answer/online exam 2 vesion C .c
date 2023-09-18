#include <stdio.h>
int main ()
{
	int n,m,k;
	
	for(n=1;n<=2;++n)
	{
		for(m=1;m<=2;++m)
		{
			for (k=1;k<=2;++k)
			{
				printf("[%d %d %d]\n",n,m,k);
			}
		}
		
	}
}

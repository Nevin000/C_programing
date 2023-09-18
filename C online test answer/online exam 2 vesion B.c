#include <stdio.h>
int main ()
{
	int n,m;
	
	for(n='a';n<=101;++n)
	{
		for(m=101;m>=n;--m)
		{
			printf("%c",n);
		}
		printf( "\n");
	}
}

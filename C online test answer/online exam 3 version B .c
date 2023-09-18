#include<stdio.h>
int main ()
{
	int seatOfSize[10];
	int i,j;
	
	for(i=0;i<10;++i)
	{
		printf("pls input the seat number(1-10) : ");
		scanf("%d",&seatOfSize[i]);
		
		if(seatOfSize[i]==-1)
		{
			break;
		}
		
		if(seatOfSize[i]>0 && seatOfSize[i]<11)
		{
			for(j=0;j<i;++j)
			{
				if(seatOfSize[i]==seatOfSize[j])
				{
					printf("The seat %d is reseved\n",seatOfSize[i]);
					i--;
				}
				else
				{
					continue;
				}
			}
		}
		else
		{
			printf("Sorry.Please input the valid seat number\n");
			i--;
		}

 	}
 	
 	printf("\nSeat Numbers : ");
 	for(j=0;j<i;++j)
 	{
 		printf("%d ",seatOfSize[j]);
	 }
}

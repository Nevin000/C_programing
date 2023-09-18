#include <stdio.h>
int main()
{
	int noOfchildren;
	float totalAmount;
	char insType,fam_or_ind,nextItem;

do {	
		printf("Insurance Type : ");
		scanf(" %c",&insType);

		if (insType == 'A' || insType == 'N' || insType == 'D' || insType == 'S' )
	{
		if (insType == 'A')
		{
		printf("Family or Individual (F- family and I- individual) : ");
		scanf(" %c",&fam_or_ind);
			
			if(fam_or_ind == 'I')
			{
				totalAmount = 4500;
				printf("Total Amount : %.2f",totalAmount);
			}
			else if (fam_or_ind == 'F')
			{
	        	printf("Number of children : ");
				scanf("%d",&noOfchildren);
				
				totalAmount = (5200+5200*10/100.00*noOfchildren)-5200*10/100*2;
				printf("Total Amount : %.2f",totalAmount);
		}
		printf("\nDo you want to continue : ");
		scanf(" %c",&nextItem);
	
	if(nextItem == 'n')
	{
		break;
	}
	
	
}
		if (insType == 'N')
		{
			printf("Family or Individual (F- family and I- individual) : ");
		scanf(" %c",&fam_or_ind);
			
			if(fam_or_ind == 'I')
			{
				totalAmount = 3100;
				printf("Total Amount : %.2f",totalAmount);
			}
			else if (fam_or_ind == 'F')
			{
	        	printf("Number of children : ");
				scanf("%d",&noOfchildren);
				
				totalAmount = (4300+4300*10/100.00*noOfchildren)-4300*10/100*2;
				printf("Total Amount : %.2f",totalAmount);
	}
		printf("\nDo you want to continue : ");
		scanf(" %c",&nextItem);
	
	if(nextItem == 'n')
	{
		break;
	}
	
	}
		if (insType == 'D')
		{
			printf("Family or Individual (F- family and I- individual) : ");
			scanf(" %c",&fam_or_ind);
			
			if(fam_or_ind == 'I')
			{
				totalAmount = 3600;
				printf("Total Amount : %.2f",totalAmount);
			}
			else if (fam_or_ind == 'F')
			{
	        	printf("Number of children : ");
				scanf("%d",&noOfchildren);
				
				totalAmount = (4800+4800*10/100.00*noOfchildren)-4800*10/100*2;
				printf("Total Amount : %.2f",totalAmount);
		}
		printf("\nDo you want to continue : ");
		scanf(" %c",&nextItem);
	
	if(nextItem == 'n')
	{
		break;
	}
	
	}
		if (insType == 'S')
		{
			printf("Family or Individual (F- family and I- individual) : ");
			scanf(" %c",&fam_or_ind);
			
			if(fam_or_ind == 'I')
			{
				totalAmount = 3300;
				printf("Total Amount : %.2f",totalAmount);
			}
			else if (fam_or_ind == 'F')
			{
	        	printf("Number of children : ");
				scanf("%d",&noOfchildren);
				
				totalAmount = (3800+3800*10/100.00*noOfchildren)-3800*10/100*2;
				printf("Total Amount : %.2f",totalAmount);
		}
		printf("\nDo you want to continue : ");
		scanf(" %c",&nextItem);
	
		if(nextItem == 'n')
	{
		break;
	}

	
	}
}
	else 
	{
		printf("Invalid Insurance Type!");
		
	
		printf("\nDo you want to continue : ");
		scanf(" %c",&nextItem);
	}
	
	
}
while (nextItem != 'n');
	
	return 0;
}


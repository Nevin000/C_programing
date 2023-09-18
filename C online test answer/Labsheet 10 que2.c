#include<stdio.h>
int main(void)
{
	FILE *cfPtr;
	
	char itemId[4];
	int quantity;
	int unitPrice;
	int i;
	int totalPrice=0,price;
	char name[4];
	
	
	cfPtr = fopen("purchase.txt", "w");
	
	//fprintf(cfPtr,"%s%10s%13s%19s\n","Item ID","Name","Quantity","Price for 1kg");
	
	if ( cfPtr == NULL)
	{
		printf("Fail to creat file\n");
		return -1;
	}
	for(i=1;i<3;i++)
	{
		printf("Item ID : ");
		scanf(" %s",&itemId);
		
		printf("Name : ");
		scanf(" %15s",&name);
		
		printf("Quantity : ");
		scanf("%10d",&quantity);
		
		printf("Price for 1kg : ");
		scanf("%15d",&unitPrice);
		
		
		printf("\n");
		
		fprintf(cfPtr,"%s%15s%10d%15d\n",itemId,name,quantity,unitPrice);
	}
	
	fclose(cfPtr);
	
	printf("%s%13s%13s%19s\n","Item","Quantity","Unit Price","price(Rs.)");

	cfPtr = fopen("purchase.txt", "r");
	
	fscanf(cfPtr,"%s %s %d %d",&itemId,&name,&quantity,&unitPrice);
	while(!feof(cfPtr))
	{
		price = quantity*unitPrice;
		totalPrice = totalPrice+price;
		printf("%s %13d %13d %18d",name,quantity,unitPrice,price);
		fscanf(cfPtr,"%s %s %d %d",&itemId,&name,&quantity,&unitPrice);
		
		printf("\n");
	}
		printf("Total ");
		printf("%43d",totalPrice);
		fscanf(cfPtr," %43d",&totalPrice);

	fclose(cfPtr);
	return 0;
}

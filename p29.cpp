#include<stdio.h>
#define maxboys 4
#define maxitems 3
int main()
{
	int value[maxboys][maxitems];
	int grandtotal;
	int boytotal[maxboys];
	int itemtotal[maxitems];
	int i,j;
	
	printf("Enter values one by one in a row\n");
	
	for(i=0;i<maxboys;i++)
	{
		boytotal[i]=0;
		for(j=0;j<maxitems;j++)
		{
			scanf("%d",&value[i][j]);
			boytotal[i]=boytotal[i]+value[i][j];
		}
	}
	
	for(j=0;j<maxitems;j++)
	{
		itemtotal[j]=0;
		for(i=0;i<maxboys;i++)
		{
			itemtotal[j]=itemtotal[j]+value[i][j];
		}
	}
	
	grandtotal=0;
	for(j=0;j<maxitems;j++)
	{
		grandtotal=grandtotal+itemtotal[j];
	}
	
	for(i=0;i<3;i++)
	{
		printf("ITEM[%d]\t\n",i+1);
	}
	printf("BOYS TOTAL\n");
	for(i=0;i<maxboys;i++)
	{
		
		printf("Saleboy[%d]\t=\t%d\n",i+1,boytotal[i]);
	}
	printf("ITEM TOTAL\n");
	for(j=0;j<maxitems;j++)
	{
		
		printf("ITEM[%d]\t=\t%d\n",j+1,itemtotal[j]);
	}
	
	printf("GRANDTOTAL\t=\t%d",grandtotal);
	
	return 0;
}

#include<stdio.h>
int main()
{
	FILE *p;
	p=fopen("inven","w");
	int num,qty;
	float price,value;
	char itemname[20];
	printf("itemname\tnumber\tprice\tquantity\n");
	int i;
	for(i=0;i<3;i++)
	{
		fscanf(stdin,"%s %d %f %d",itemname,&num,&price,&qty);
		fprintf(p,"%s %d %f %d",itemname,num,price,qty);
	}
	fclose(p);
	p=fopen("inven","r");
	printf("printing with value calculated\n");
	printf("itemname\tnumber\tprice\tquantity\n");

	for(i=0;i<3;i++)
	{
		fscanf(p,"%s %d %f %d",itemname,&num,&price,&qty);
		value=price*qty;
		fprintf(stdout,"%s %d %f %d %f\n",itemname,num,price,qty,value);
	}
	
	fclose(p);
}

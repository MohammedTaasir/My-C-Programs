#include<stdio.h>
struct inven{
	char name[20];
	int num,qty;
	float price;                                                          
};
void append(struct inven *,FILE *);
int main()
{
	char filename[20];
	struct inven item;
	int response,n;
	FILE *p;
	printf("enter filename in which you want to append\n");
	scanf("%s",filename);
	p=fopen(filename,"a");                                             //HERE THIS PROGRAM IS LINKED WITH CB.C IN WHICH FILENAME IS INVEN IF WE WRITE INVEN APPENDATION IS DONE IN THAT FILE
	do{
		append(&item,p);
		printf("item %s appended\n",item.name);
		printf("enter 1 to append more else 0 to exit\n");
		scanf("%d",&response);
	}while(response==1);
	n=ftell(p)-2;
	fclose(p);
	p=fopen(filename,"r");
	while(ftell(p)<n)
	{
		fscanf(p,"%s %d %f %d",item.name,&item.num,&item.price,&item.qty);         //MAIN SEGMENT WHICH PRINTS OUTPUT
		fprintf(stdout,"%s %d %f %d\n",item.name,item.num,item.price,item.qty);
	}
	fclose(p);
}
void append(struct inven *k,FILE *p)
{
	printf("enter item name\n");
	scanf("%s",k->name);
	printf("enter number\n");
	scanf("%d",&k->num);
	printf("enter price\n");
	scanf("%f",&k->price);
	printf("enter quantity\n");
	scanf("%d",&k->qty);
	fprintf(p,"%s %d %f %d",k->name,k->num,k->price,k->qty);
}

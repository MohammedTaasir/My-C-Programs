#include<stdio.h>
#define rows 30
#define columns 10
int main()
{
	int i,j,row,column,y;
	row=1;
	printf("\t\t\tMULTIPLICATION TABLE OF %d\n\n",rows);
	printf("---------------------------------------------------------------------------\n\n");
	for(i=1;i<=rows;i++)
	{
		column=1;
		for(j=1;j<=columns;j++)
		{
			y=row*column;
			printf("%d\t",y);
			column=column+1;
		}
		row=row+1;
		printf("\n");
	}
	return NULL;
}

#include<stdio.h>
#define rows 10
#define columns 10
int main()
{
	int i,j;
	int row, column;
	int product[rows][columns];
	
	for(j=1;j<=columns;j++)
	{
		printf("      %d\t",j);
	}
	printf("\n");
	for(i=0;i<rows;i++)
	{
		row=i+1;
		printf("%d|\t",row);
		for(j=1;j<=columns;j++)
		{
			column=j;
			product[i][j]=row*column;
			printf("%4d\t",product[i][j]);
		}
		printf("\n");
	}
	return 0;
}

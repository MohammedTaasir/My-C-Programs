#include<stdio.h>
#define rows 5
#define columns 5
int main()
{
	int row,column,j,i;
	int value[rows][columns];
	
	printf("MULTIPLICATION TABLE\n");
	printf(" ");
	for(j=1;j<=columns;j++)
	{
		printf(" %d\t",j);
	}
	printf("\n");
	for(i=0;i<rows;i++)
	{
		row=i+1;
		printf("%d| ",row);
		for(j=1;j<=columns;j++)
		{
			column=j;
			value[i][j]=row*column;
			printf("%d\t",value[i][j]);
		}
		printf("\n");
	}
	return 0;
}

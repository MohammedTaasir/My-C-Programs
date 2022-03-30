#include<stdio.h>
void add()
int main()
{
	int a[3][3],b[3][3],i,j,*app[3][3];
	int *x,*y;
	x=a[3][3];
	y=b[][3];
	printf("enter matrix 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	printf("enter matrix 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	*app[][3]=(*add)(x,y);
	printf("added matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*app[i][j]);
		}
		printf("\n");
	}
	
}

int (*add)(int *x[][3],int *y[][3])
{
	int *at[][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			*at[i][j]=*x[i][j]+*y[i][j];
		}
	}
	return *at;
	
}

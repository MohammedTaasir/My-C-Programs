#include<stdio.h>
int main()
{
	int a[40][40],b[40][40],c[40][40],i,j,n;
	printf("enter the order of two nxn matrix\n");
	scanf("%d",&n);
	printf("enter first matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the matrix addition is performed as follows\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	

}

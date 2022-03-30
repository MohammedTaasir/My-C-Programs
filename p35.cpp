#include<stdio.h>

int main()
{
	int a1[10][10],a2[10][10],a,b,i,j,c[10][10],k;
	printf("Enter size of square matrix:\n");
	scanf("%d",&a);
	b=a;
	printf("Enter elements of square matrix in row fashion=\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("\nEnter next element of matrix a1:");
			scanf("%d",&a1[i][j]);
			
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("\nEnter next element of matrix a2:");
			scanf("%d",&a2[i][j]);
			
		}
	}
	
	printf("Entered matrices are:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",a1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",a2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			c[i][j]=0;
			for(k=0;k<a;k++)
			{
				c[i][j]=c[i][j]+a1[i][k]*a2[k][j];
			}
		}
	}
printf("The product of above two matrices are:\n");
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		printf("%d\t",c[i][j]);
	}
	printf("\n");
	}	
	
	return 0;
}

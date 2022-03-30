#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],c[20][20],i,j,k,m,n,o,p,sum;
	printf("enter the row and column of first matrix\n");
	scanf("%d %d",&m,&n);
	printf("enter the row and column of second matrix\n");
	scanf("%d %d",&o,&p);
	if(n!=o)
	{
		printf("matrix multiplication is not possible\n");
	}
	else
	{
		printf("enter the first matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter the second matrix\n");
		for(i=0;i<o;i++)
		{
			for(j=0;j<p;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				c[i][j]=0;
				for(i=0;i<m;i++)
				{
					for(j=0;j<p;j++)
					{
						sum=0;
						for(k=0;k<n;k++)
						{
							sum=sum+a[i][k]*b[k][j];
						}
						c[i][j]=sum;
					}
				}
			}
		}
	}
	printf("the resultant matrix is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}

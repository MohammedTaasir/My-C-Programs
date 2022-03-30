#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50],m,n,o,p,i,j,k,sum=0;
	printf("enter row and column of 1st matrix\n");
	scanf("%d %d",&m,&n);
	printf("enter row and column of 2nd matrix\n");
	scanf("%d %d",&o,&p);
	if(n!=o)
	{
		printf("matrix multiplication is not possible\n");
	}
	else
	{
		printf("enter 1st matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter 2nd matrix\n");
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
	
	printf("the matrix multiplication is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}	
	}
	
	
}

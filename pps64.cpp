#include<stdio.h>
int main()
{
	int a[40][40],i,j,p=0,n=0,z=0;
	printf("enter elements of 3x3 matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				z++;
			}
			if(a[i][j]<0)
			{
				n++;
			}
			if(a[i][j]>0)
			{
				p++;
			}
		}
	}
	printf("positive elements = %d , negative elements = %d , zero elements = %d",p,n,z);
	
	
	
	
	
	
	
	
	
	
	
	
	
}

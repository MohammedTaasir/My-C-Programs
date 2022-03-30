#include<stdio.h>
int main()
{
	int i,j,isPrime,n;
	printf("enter value of n\n");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		isPrime=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
	             isPrime=1;
			}			
		}
		if(isPrime==0)
		{
			printf("%d ",i);
		}
	}
}

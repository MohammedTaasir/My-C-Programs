#include<stdio.h>
int main()
{
	int i,j,n,isPrime;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		isPrime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isPrime=2;
			}
		}
		
	}
	if(isPrime==1)
	{
		printf("the no is prime");
	}
	if(isPrime==2)
	{
		printf("the no is composite");
	}
	
	
}

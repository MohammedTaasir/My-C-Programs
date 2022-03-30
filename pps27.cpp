#include<stdio.h>
int main()
{
	int i,j,n,isPrime;
	printf("enter number\n");
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
	}
	if(isPrime==0)
	{
		printf("the no is prime\n");
	}
	if(isPrime==1)
	{
		printf("the no is consonant\n");
	}
}

#include<stdio.h>
int main()
{
	int i,j,n,isPrime;
	printf("enter n\n");
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
//we have explicitly specified isPrime==0 because we need only that i's for which isPrime is equal to 0 after visiting 
//for loop of j if we write only printf without if statement than all i's will be printed and we not need i's for isPrime=1;
//because i's for isPrime=1 are also coming after exiting j for loop;


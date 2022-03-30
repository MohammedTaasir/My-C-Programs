#include<stdio.h>
int main()
{
	int i,j,n,isPrime;
	printf("enter number\n");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		isPrime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isPrime=2;
				break; 
			}
		}
		if(isPrime==1)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}

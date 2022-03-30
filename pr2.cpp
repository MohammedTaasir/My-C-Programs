#include<stdio.h>
int main()
{
	int i,j,n;
	int isPrime;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		isPrime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isPrime=0;
				
			}
		}
		if(isPrime==1)
		{
			printf("%d ",i);
		}
	}
}

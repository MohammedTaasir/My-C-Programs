#include<stdio.h>
int main()
{
	int isPrime,i,j,n;
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
				break;
			}
		
		}
		if (isPrime==0)
		{
			printf("%d\t",i);
		}
		
	}
	return 0;
}

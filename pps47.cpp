#include<stdio.h>
int main()
{
	int i,j,n,isPrime;
	for(i=101;i<200;i++)
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
			n++;
		}
	}
	printf("\nthe number of prime nos between 100 and 200 is %d",n);
}

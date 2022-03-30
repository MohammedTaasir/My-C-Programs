#include<stdio.h>
int main()
{
	int n,rem,i,sum=0;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("the num is perfect number\n");
	}
	else
	{
		printf("not perfect\n");
	}
}

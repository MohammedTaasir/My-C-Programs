#include<stdio.h>


int fac(int n)
{
	int i,fac=1;
	for (i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return (fac);
}

double sum(int n)
{
	double sum=0;
	int i;
	for(i=1;i<=n;i++)
	{
		sum=sum+1/fac(i);
	}
	return (sum);
}

int main()
{
	int n;
	float s;
	printf("enter value of n\n");
	scanf("%d",&n);
	s=sum(n);
	printf("sum of series is %d",s);
}

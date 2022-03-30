#include<stdio.h>
int main()
{
	int n,d,i;
	printf("enter number\n");
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
		++d;
		n=n/10;
	}
	printf("the digits in %d is %d",i,d);
	return 0;
}

#include<stdio.h>
int main()
{
	int fib1=0,fib2=1,fib3,n,i;
	printf("enter n\n");
	scanf("%d",&n);
	
	i=2;
	while(i<=n)
	{
		fib3=fib1+fib2;
		i++;
		fib1=fib2;
		fib2=fib3;
	}
	printf("%d",fib1);
	
}

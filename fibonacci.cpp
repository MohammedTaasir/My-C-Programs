#include<stdio.h>
int main()
{
	int fib1=0,fib2=1,fib3,i,n;
	printf("enter n\n");
	scanf("%d",&n);
	printf("%d %d ",fib1,fib2);
	i=2;
	while(i<=n)
	{
		fib3=fib1+fib2;
		printf("%d ",fib3);
		i=i+1;
		fib1=fib2;
		fib2=fib3;
	}
}

#include<stdio.h>
int fib(int);
int main()
{
	int c,n,i=0;
	printf("enter limit\n");
	scanf("%d",&n);
	printf("your fibonacci is here\n");
	for(c=0;c<=n;c++)//taking starting from 0
	{
		printf("%d\t",fib(i));
		i++;
	}
}

int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else{
		return (fib(n-1)+fib(n-2));
	}
}

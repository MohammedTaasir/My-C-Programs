#include<stdio.h>
int fib(int);
int main()
{
	int i,j;
	int n=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",fib(n));
			n=n+1;	
		}
		printf("\n");
	}
}

int fib(int k)
{
	if(k<=1)
	{
		return k;
	}
	else{
		return (fib(k-1)+fib(k-2));
	}
}

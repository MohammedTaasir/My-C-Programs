#include<stdio.h>
int factorial(int);
int main()
{
	int a,factori;
	fr:
	printf("enter number\n");
	scanf("%d",&a);
	factori=factorial(a);
	printf("factorial of %d is %d\n",a,factori);
	if(a!=1)
	{
		goto fr;
	}
}

int factorial(int n)
{
	int fact;
	if(n==1)
	{
		return (1);
	}
	else{
		fact=n*factorial(n-1);
	}
	return fact;
}

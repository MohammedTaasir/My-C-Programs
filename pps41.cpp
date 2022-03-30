#include<stdio.h>

int GCD(int,int);
int main()
{
	int a,b;
	printf("enter a,b\n");
	scanf("%d %d",&a,&b);
	printf("gcd of two numbers is %d",GCD(a,b));
}
int GCD(int x,int y)
{
	if(y>x)
	{
		return GCD(y,x);
	}
	if(y==0)
	{
		return x;
	}
	else
	{
		return GCD(y,x%y);
	}
}

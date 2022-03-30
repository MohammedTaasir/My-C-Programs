#include<stdio.h>
int gcd(int,int);
int main()
{
	int x,y;
	printf("enter x and y\n");
	scanf("%d %d",&x,&y);
	printf("gcd of number is %d",gcd(x,y));
}

int gcd(int a,int b)
{
	if(b>a)
	{
		return gcd(b,a);
	}
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}

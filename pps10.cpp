#include<stdio.h>
int fact(int);
int main()
{
	int fac,n;
	printf("enter n\n");
	scanf("%d",&n);
	fac=fact(n);
	printf("the factorial of given no is %d",fac);
}

int fact(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return(a*fact(a-1));
	}
}

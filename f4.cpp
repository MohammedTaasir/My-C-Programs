#include<stdio.h>
int power(int,int);
int main()
{
	int x,n,expo;
	printf("enter value of x\n");
	scanf("%d",&x);
	printf("enter value of raised power\n");
	scanf("%d",&n);
	expo=power(x,n);
	printf("the %d raise to %d is %d\n",x,n,expo);
}

int power(int a,int b)
{
	int i=1;
	while(b>0)//because we dont know value of b yet
	{
		i=i*a;
		b--;
	}
	return i;
}

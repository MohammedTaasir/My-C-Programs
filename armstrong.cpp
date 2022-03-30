#include<stdio.h>
int main()
{
	int s=0,r,n,t;
	printf("enter n\n");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(s==t)
	{
		printf("armstrong number\n");
	}
	else
	{
		printf("not an armstrong number\n");
	}
}

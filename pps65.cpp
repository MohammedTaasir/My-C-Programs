#include<stdio.h>
int sum(int);
int main()
{
	int i,s,n;
	printf("enter n upto which summation is needed\n");
	scanf("%d",&n);
	s=sum(n);
	printf("sum = %d",s);
}

int sum(int a)
{
	if(a==1)
	{
		return 1;
	}
	return (a+sum(a-1));
}

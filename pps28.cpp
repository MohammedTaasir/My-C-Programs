#include<stdio.h>
int max(int ,int);
int main()
{
	int i,j,m;
	printf("enter i\n");
	scanf("%d",&i);
	printf("enter j\n");
	scanf("%d",&j);
	m=max(i,j);
	printf("max of two is %d",m);
	
}

int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

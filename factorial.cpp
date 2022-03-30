#include<stdio.h>
int fact(int);
int main()
{
	int f,n;
	printf("enter num\n");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial is %d\n",f);
}

int fact(int a)
{
	if(a==1)
	{
		return 1;
	}
	
	
		return (a*fact(a-1));
	
}


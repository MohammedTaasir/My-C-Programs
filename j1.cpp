#include<stdio.h>
int rf(int);
int f1=0,f2=1;
int main()
{
	int n,recf;
	printf("enter limit\n");
	scanf("%d",&n);
	recf=rf(n);
}

int rf(int a)
{
	
	int f3;
	f3=f1+f2;
	printf("%d",f3);
	f1=f2;
	f2=f3;
	return rf(a);
	a--;
	if(a==(a-2))
	{
		return f3;
	}
	
}

#include<stdio.h>
int max(int,int);
int main()
{
	int mx,i,j,a,b;
	printf("enter a and b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	mx=max(a,b);
	printf("max number is %d\n",mx);
}

int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else{
		return b;
	}
}

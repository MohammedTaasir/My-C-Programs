#include<stdio.h>
int main()
{
	int x,y,n,i;
	printf("enter x\n");
	scanf("%d",&x);
	y=1;
	printf("enter power of x\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		y=x*y;
	}
	printf("enter x^%d is %d",n,y);
}

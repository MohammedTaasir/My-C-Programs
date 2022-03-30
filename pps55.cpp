#include<stdio.h>
int main()
{
	int i,rev=0,n;
	printf("enter number\n");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		rev=rev*10+i;
		n=n/10;
	}
	printf("the reverse number is %d\n",rev);
}

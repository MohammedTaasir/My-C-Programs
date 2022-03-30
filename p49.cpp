#include<stdio.h>
int main()
{
	int rev=0,i,n,temp;
	printf("enter number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rev=rev*10+(n%10);
		n=n/10;
	}
	printf("the reverse numeric string of %d is %d",temp,rev);
}

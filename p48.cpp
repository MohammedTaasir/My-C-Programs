#include<stdio.h>
int main()
{
	int i,n,sum=0,digit;
	printf("enter number\n");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		sum=sum+digit;
		n/=10;
	}
	printf("the sum of digits is %d",sum);
	return 0;
}

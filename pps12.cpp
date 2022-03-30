#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=1;i<n;i+=2)
	{
		sum=sum+i;
	}
	if(n%2==1)
	{
		sum=sum+n;
	}
	printf("the sum is %d",sum);
	
	
	
	
}

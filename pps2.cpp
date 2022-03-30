#include<stdio.h>
int main()
{
	int a[20],i,n=10,sum=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("the sum of above entered number is %d\n",sum);
	
}

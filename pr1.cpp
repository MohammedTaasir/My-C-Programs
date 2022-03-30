#include<stdio.h>
int main()
{
	int a[20],*p,n,i;
	p=a;
	printf("enter number of elements\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("in reverse order\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",*(p+i));
	}
		
}

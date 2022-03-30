#include<stdio.h>
int main()
{
	int a[30],*p=a;
	int n,i;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}	
	printf("array in reverse pattern is \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",*(p+i));
	}
}

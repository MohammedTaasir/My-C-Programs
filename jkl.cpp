#include<stdio.h>
int count(int []);
int main()
{
	int a[50];
	int i,n;
	printf("enter tot no");
	scanf("%d",&n);
	printf("enter array elems\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array has %d elems\n",count(a));
}
int count(int a[])
{
	return(sizeof(a)/sizeof(a[0]));
}

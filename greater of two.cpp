#include<stdio.h>
int main()
{
	int m, n;
	printf("Enter m\n");
	scanf("%d",&m);
	printf("Enter n\n");
	scanf("%d",&n);
	if (m%n==0)
	{
		printf("m is the multiple of n");
	}
	else
	{
		printf("m is not the multiple of n");
	}
	return 0;
}

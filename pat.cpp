#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=8-i;j>=1;j--)
		{
			printf(" \t");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d\t",j);
		}
		printf("\n\n");
	}
}

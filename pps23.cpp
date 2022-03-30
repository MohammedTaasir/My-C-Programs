#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=6-i;j>=1;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		printf("*");
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

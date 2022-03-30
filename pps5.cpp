#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=4-i)
			{
				printf(" ");
				
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	for(i=2;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

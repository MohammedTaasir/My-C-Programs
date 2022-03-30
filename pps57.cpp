#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{k=i;
		for(j=5-i;j>=1;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
	}
}

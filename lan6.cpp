#include<stdio.h>
int main()
{
	char i,j;
	for (i=5;i>=1;i--)
	{
		for (j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}

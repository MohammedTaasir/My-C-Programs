#include<stdio.h>
int main()
{
	char i,j;
	for(i=5;i>=1;i--)
	{
		for (j=i;j>=1;j--)
		{
			printf("%c",70-i);
		}
		printf("\n");
	}
	return 0;
}

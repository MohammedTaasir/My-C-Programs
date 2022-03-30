#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		printf("%d",i);
		
		for(j=i;j<=i;j++)
		{
		printf("%d",j);
		
		}
		printf("\n");
	}
	return 0;
}

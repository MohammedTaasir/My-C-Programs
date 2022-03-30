#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter value of n\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			{
				printf("1");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

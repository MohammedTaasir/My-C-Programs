#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter number of lines you want\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
				{
					printf("0 ");
				}
				else{
					printf("1 ");
				}
			}printf("\n");
		}
		else if(i%2==0)
		{
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
				{
					printf("1 ");
				}
				else{
					printf("0 ");
				}
			}printf("\n");
		}
	}
	
}

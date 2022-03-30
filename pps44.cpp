#include<stdio.h>
int main()
{
	int i,j,k=1,d=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i%2==0&&j%2!=0)||(i%2!=0&&j%2==0))
			{
				printf("%d ",d);
			}
			else
			{
				printf("%d ",k);
			}
		}
		printf("\n\n");
	}
}

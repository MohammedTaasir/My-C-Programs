#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==4&&i==1)
			{
				printf("*");
			}
			else if(j==2&&i==3||j==4&&i==3)
			{
				printf("*");
			}
			else if(j==3&&i==2||j==5&&i==2)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

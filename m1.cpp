#include<stdio.h>
int main()
{
	char a[6]={'*','*','*','*','*'};
	int i,j;
	for(i=0;i<5;i++)
	{
		
		printf("%c",a[i]);
		for(j=0;j<i;j++)
		{
			printf("\n");
		}
		printf(" ");
	}
}

#include<stdio.h>
int main()
{
	int n[50],i,even=0,odd=0;
	printf("enter numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++)
	{
		if(n[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("even nos are %d\n",even);
	printf("odd nos are %d\n",odd);
	
}

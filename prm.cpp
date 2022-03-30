#include<stdio.h>
int main()
{
	int j,i=3,n,c;
	printf("enter n\n");
	scanf("%d",&n);
	if(n>=1)
	{
		printf("2 ");
	}
	for(j=2;j<=n;i++)
	{
		for(c=2;c<i;c++)
		{
			if(i%c==0)
			{
				break;
			}
		}
		if(c==i)
		{
			printf("%d ",i);
			j++;
		}
	}
	
}

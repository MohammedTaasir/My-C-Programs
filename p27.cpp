#include<stdio.h>
int main()
{
	int i,j,n;
	t:
	printf("Enter value of n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(n%2!=0)
			{
			
			if(i==(n/2)+1&&j==(n/2)+1)
			{
				printf("O ");
			}
			else{
				printf("S ");
			}
		    }
		    else{
		    	goto t;
			}
		}
		printf("\n");
	}
	return 0;
}

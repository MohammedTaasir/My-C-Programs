#include<stdio.h>
int main()
{
	int i=1,n,j=1;
	printf("enter n\n");
	scanf("%d",&n);
	a:j=1;
	b:
		{
			{
				if((i%2==0&&j%2==1)||(i%2==1&&j%2==0))
				{
					printf("0");
				}
				else
				{
					printf("1");
				}
			}j++;
			if(j<=i)
			{
				goto b;
			}
			else
			{
				goto c;
			}
		}
	c:
		i++;printf("\n");
		if(i<=n)
		{
			goto a;
		}
}

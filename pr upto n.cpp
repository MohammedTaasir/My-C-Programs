#include<stdio.h>
int main()
{
	int i,n,p,d,flag;
	printf("enter n\n");
	scanf("%d",&n);
	p=2;
	i=1;
	while(i<=n)
	{
		flag=1;
		for(d=2;d<=p-1;d++)
		{
			if(p%d==0)
			{
				flag=0;
				break;
			}
		
		if(flag==1)
		{
			printf("%d ",p);
			i++;
		}
		p++;
		}
	}
	
}

#include<stdio.h>
int main()
{
	int p,d,flag,n;
	printf("enter limit\n");
	scanf("%d",&n);
	for(p=2;p<=n;p++)
	{
		flag=1;
		for(d=2;d<=p-1;d++)
		{
			if((p%d)==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d ",p);
		}
	}
}

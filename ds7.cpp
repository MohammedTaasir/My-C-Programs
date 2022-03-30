#include<stdio.h>
int main()
{
	int i,num,j,flag;
	printf("enter number\n");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		flag=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("%d\t",i);
		}
	}

}

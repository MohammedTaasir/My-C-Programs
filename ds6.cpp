#include<stdio.h>
int main()
{
	int i,num,flag=1;
	printf("enter number\n");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
		if(flag==1)
		{
			printf("%d\t"o);
		}
	}
/*	if(flag==1)
	{
		printf("PRIME\n");
	}
	else
	{
		printf("COMPOSITE\n");
	}*/
}

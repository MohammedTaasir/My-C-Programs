#include<stdio.h>
int main()
{
	int i,n,sum=0;
	for(i=100;i<200;i++)
	{
		if(i%7==0)
		{
			n++;
			sum=sum+i;
			printf("%d ",i);
		}
	}
	printf("\nthe no is %d and the sum is %d",n,sum);
}

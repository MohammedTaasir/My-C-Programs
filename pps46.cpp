#include<stdio.h>
int main()
{
	int i,j,sum=0,n;
	for(i=0;i<100;i++)
	{
		if(i%6==0&&i%4!=0)
		{
			printf("%d ",i);
			n++;
			sum=sum+i;
		}
	}
	printf("\nthe no is %d and the sum is %d",n,sum);
}

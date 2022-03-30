#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<40;i+=2)
	{
		sum+=i;
		printf("%d \n",i);
	}
	printf("sum is = %d\n",sum);
}

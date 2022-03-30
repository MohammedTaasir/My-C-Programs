#include<stdio.h>
int main()
{
	int i,x;
	r:
	printf("enter x\n");
	scanf("%d",&x);
	for(i=x;i!=10;)
	{
		goto r;
		if(i==10)
		{
			break;
		}
	}
	return 0;
}

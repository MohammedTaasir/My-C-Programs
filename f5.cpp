#include<stdio.h>
int main()
{
	int x,y,i,temp;
	printf("enter x\n");
	scanf("%d",&x);
	printf("enter y\n");
	scanf("%d",&y);
	temp=y;
	y=1;
	for(i=0;i<temp;i++)
	{
		y=x*y;
	}
	printf("x raise to y is %d",y);
}

#include<stdio.h>
int main()
{
	int x;
	int y;
	float i;
	printf("enter x\n");
	scanf("%d",&x);
	printf("enter y\n");
	scanf("%d",&y);
	i=1;
	if(y>0)
	while(y>0)
	{
		i=i*x;
		y--;
	}
	printf("x raise to y is %.f",i);
}

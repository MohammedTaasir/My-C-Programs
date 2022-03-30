#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a b\n");
	scanf("%d %d",&a,&b);
	if(a%2==0)
	{
		printf("a is even\n");
	}
	else{
		printf("a is odd\n");
	}
	if(b%2==0)
	{
		printf("b is even\n");
	}
	else{
		printf("b is odd\n");
	}
}

#include<stdio.h>
int difference(int,int);
float ratio(int,int,int);
int main()
{
	int a,b,c;
	float rat;
	printf("enter a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("ratio is %f\n",ratio(a,b,c));
	
}

float ratio(int a,int b,int c)
{
	if(difference(b,c))
	{
		return (a/(b-c));
	}
	else
	{
		return (0.0);
	}
}

int difference(int j,int k)
{
	if(j!=k)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

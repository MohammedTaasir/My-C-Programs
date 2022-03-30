#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
	{
		printf("the triangle is right angle triangle\n");
	}
	else
	{
		printf("not a right triangle\n");
	}
}

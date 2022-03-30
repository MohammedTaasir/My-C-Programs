#include<stdio.h>
void round(float,int);
int main()
{
	float a;
	int n;
	printf("enter value\n");
	scanf("%f",&a);
	printf("enter your precision\n");
	scanf("%d",&n);
	printf("your value was %f\n",a);
	printf("your rounded value is\n");
	round(a,n);
}

void round(float x,int y)
{
	printf("%.*f",y,x);
}

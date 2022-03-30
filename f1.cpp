#include<stdio.h>
#include<math.h>
float squareroot(float n);
int main()
{
	
	float a,root;
	printf("enter number\n");
	scanf("%f",&a);
	root=squareroot(a);
	printf("square root of entered number %f is %f",a,root);
	return 0;
}

float squareroot(float x)
{
	float sqroot;
	sqroot=sqrt(x);
	return sqroot;
}

#include<stdio.h>
#include<math.h>
int main()
{
	float p,n,d,c;
	printf("Enter value of p:\n");
	scanf("%f",&p);
	printf("Enter value of d:\n");
	scanf("%f",&d);
	printf("Enter value of c:\n");
	scanf("%f",&c);
	
	n=log(p/c)/log(1-d);
	
	printf("The value of n for given p,d,c is %f",n);
	return 0;
}

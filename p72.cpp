//C PROGRAM TO PRINT RIGHT MOST ONE DIGIT BEFORE FLOATING POINT
#include<stdio.h>
int main()
{
	float x;
	printf("ENTER FLOATING LITERAL\n");
	scanf("%f",&x);
	x=(int)x%10;
	printf("RIGHT MOST DIGIT OF INTEGER PART IS %.f",x);
	return 0;
}

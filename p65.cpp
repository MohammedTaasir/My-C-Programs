//C PROGRAM TO PRINT RIGHT MOST TWO DIGITS BEFORE FLOATING POINT.
#include<stdio.h>
int main()
{
	float num,temp;
	printf("enter floating literal\n");
	scanf("%f",&num);
	temp=num;
	temp=(int)num%10;
	num=(int)num/10;
	num=((int)num%10)*10;
	num=num+temp;
	printf("the two digits before floating point is %.f",num);
	return 0;
	
}

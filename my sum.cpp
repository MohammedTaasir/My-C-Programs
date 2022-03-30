#include<stdio.h>
int sum (int a, int b, int c, int d);
int main()
{
	int a=10, b=2, c=3, d=4, summation;
	printf("Enter number");
	printf("%d""%d""%d""%d",a,b,c,d);
	summation=sum (a, b, c, d);
	printf("The sum of given number is : ",summation);
		
}


int sum(int x, int y, int z, int w) 
{
	int p=x+y+z+w;
	return(p);
}

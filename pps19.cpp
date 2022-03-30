#include<stdio.h>
int main()
{
	int a=2;
	int s;
	printf("enter multiplier\n");
	scanf("%d",&s);
	printf("%d",a<<s);
	
}
//  << -> multiplies in multiple of 2 if 2<<1 then -> 4 if 2<<2 then -> 8 
//  >> -> divides in multiple of 2 if 10>>1 then -> 5 if 20>>2 then -> 5

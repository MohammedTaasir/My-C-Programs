#include<stdio.h>
int main()
{
	int a,b,c;
	a = (b = 4, c = 5, b+c);
	printf("%d",a);
}

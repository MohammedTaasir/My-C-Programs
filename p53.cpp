#include<stdio.h>
int main()
{
	int n=10;
	n=n++,n=++n,n=n++;
	printf("%d",n);
	return 0;	
}

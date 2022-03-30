#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int *)malloc(sizeof(int));
	*p=100;
	p=(int *)malloc(sizeof(int));
	*p=111;
	printf("%d",*p);
}

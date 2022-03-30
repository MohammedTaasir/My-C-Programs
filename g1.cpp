#include<stdio.h>
int foo(int);
int bar(int);
int main()
{
	int f=foo(3);
	int b=bar(3);
	printf("foo() = %d  bar() = %d ",f,b);
}

int foo(int val){
	int x=0;
	while(val>0){
		x=x+foo(val--);
	}
	return val;
}

int bar(int val){
	int x=0;
	while(val>0){
		x=x+bar(val-1);
	}
	return val;
}

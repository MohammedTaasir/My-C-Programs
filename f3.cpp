#include<stdio.h>
void dline(char,int);
int main()
{
	dline('@',60);
	printf("DEV C++ WELCOMES YOU FOR HAPPY PROGRAMMING INTERFACE\n");
	dline('$',60);
}

void dline(char d,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%c",d);
	}
	printf("\n");
}

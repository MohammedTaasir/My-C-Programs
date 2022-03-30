#include<stdio.h>
char conv(char []);
int main()
{
	char a[100],b[100];
	printf("enter lower case string\n");
	gets(a);
	b[]=conv(a[]);
	puts(b);
}

char conv(char a[100])
{
	char b[100];
	int i;
	for(i=0;a[i]!=NULL;i++)
	{
		b[i]=toupper(a[i]);
	}
	return b[];
}


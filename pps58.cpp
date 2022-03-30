#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[50],b[50];
	int i,n;
	printf("enter string\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=islower(a[i])?toupper(a[i]):tolower(a[i]);		
	}
	b[i]='\0';
	puts(b);
}

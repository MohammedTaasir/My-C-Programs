#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[100],b[100];
	int i;
	printf("enter string in lower case characters\n");
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		b[i]=toupper(a[i]);
	}
	puts(b);
}

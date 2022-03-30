#include<stdio.h>
#include<ctype.h>
char upper(char a);
char lower(char a);
int main()
{
	char m,n,lowerc,upperc;
	printf("enter any character\n");
	scanf("%c",&m);
	upperc=upper(m);
	lowerc=lower(m);
	return 0;
}

char upper(char x)
{
	char upcase;
	upcase=toupper(x);
	return upcase;
}

char lower(char x)
{
	char locase;
	locase=tolower(x);
	return locase;
}

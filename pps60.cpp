#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[100];
	int i,n;
	printf("enter string\n");
	gets(a);
	
	for(i=2;a[i]!='\0';i+=2)
	{
		if(islower(a[i]))
		{
			putchar(a[i]);
		}
	}
}

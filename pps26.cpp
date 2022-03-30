#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],rev[20]={'\0'};
	int length,t;
	int i;
	printf("enter string \n");
	gets(a);
	length=strlen(a);
	for(i=0;i<length;i++)
	{
		rev[length-i-1]=a[i];
	}
	puts(rev);		
}

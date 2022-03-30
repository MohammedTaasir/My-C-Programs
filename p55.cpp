#include<stdio.h>
int main()
{
	char string[100],reverse[100]={'\0'};
	int i,length=0;
	printf("enter string\n");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	for(i=length-1;i>=0;i--)
	{
		reverse[length-i-1]=string[i];
	}
	printf("%s",reverse);
	return 0;
}
//reversing whole string

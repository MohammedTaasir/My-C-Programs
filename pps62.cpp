#include<stdio.h>
int main()
{
	int i,length=0;
	char a[50],rev[50]={'\0'};
	printf("enter string\n");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		length++;
	}
	for(i=length-1;i>=0;i--)
	{
		rev[length-i-1]=a[i];
	}
	printf("%s",rev);
	
}

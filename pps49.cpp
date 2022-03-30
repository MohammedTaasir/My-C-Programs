#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,n,v=0;
	printf("enter the string\n");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			v=v+1;
		}
	}
	printf("the no of vowels in the string are %d",v);
}


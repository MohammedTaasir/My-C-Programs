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
	for(i=0;i<length;i++)
	{
		if(rev[i]==a[i])
		{
			t=1;
		}
		else{
			t=0;
		}
	}
	if(t==1)
	{
		printf("palindrome\n");
	}
	else if(t==0)
	{
		printf("not palindrome\n");
	}
	
}

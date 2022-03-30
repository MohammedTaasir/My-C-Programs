#include<stdio.h>
int main()
{
	int i,length=0,flag=0;
	char string[100],reverse[100]={'\0'};
	
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
	for(i=0;i<length;i++)
	{
		if(string[i]==reverse[i])
		{
			flag=1;
		}
		else{
			flag=0;
		}
	}
	
	if(flag==1)
	{
	printf("string is palindrome \n");}
	else if (flag==0)
	{
	printf("string is not palindrome\n");}
	
	
	
	
return 0;	
}

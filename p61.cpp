#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	int i=0;
	printf("enter str1\n");
	gets(str1);
	printf("enter str2\n");
	gets(str2);
	
		while(str1[i]!='\0'&&str2[i]!='\0'&&str1[i]==str2[i])
	{
		
		i++;
	}
	if(str1[i]=='\0'&&str2[i]=='\0')
	{
		printf("your strings are equal");
	}
	else
	{
		printf("strings not equal");
	}
	
	return 0;
}

#include<stdio.h>
int main()
{
	char a[50];
	int i,n,word=1;
	printf("enter the string\n");
	gets(a);
	i=0;
	if(a[0]=='\0')
	{
		printf("the string is empty\n");
	}
	else{
	while(a[i]!='\0')
	{
		
		if(a[i]==' ')
		{
			word++;
		}
		i++;
	}
	printf("the total words in given string is %d",word);
	}
	
}

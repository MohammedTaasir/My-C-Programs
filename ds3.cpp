#include<stdio.h>
int main()
{
	char a[100];
	int i;
	printf("enter address in one line each element seperated by commas but in only one line\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
		if(a[i]==',')
		{
			printf("\n");
		}
	}
}

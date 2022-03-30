#include<stdio.h>
int main()
{
	char a[20]="a e i o u",s;
	printf("do u want vowels?\n");
	scanf("%c",&s);
	if(s== 'y')
	{
		puts(a);
		printf("\n");
	}
	else 
	{
		printf("you need nothing dont disturb me\n");
	}
	return 0;
}

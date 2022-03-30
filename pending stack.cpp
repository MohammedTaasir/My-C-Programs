#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 100
char st[max];
int top=-1;
void push(char st[],char);
char pop(char st[]);
void infixtopostfix(char source[],char target[]);
int getpriority(char);
int main()
{
	char infix[100],postfix[100];
	printf("\nenter any infix expression");
	gets(infix);
	strcpy(postfix, "");
	infixtopostfix(infix,postfix);
	printf("\nthe corresponding postfix exp is");
	puts(postfix);
}
void infixtopostfix(char sorce[], char target)
{
	int i=0,j=0;
	char temp;
	strcpy(target, "");
	while(source[i]!='\0')
	{
		if(source[i]=='(')
		{
			push(st,source[i]);
			i++;
		}
	}
}

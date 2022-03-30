#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 100
char st[max];
int top=-1;
void push(char st[], char);
char pop(char st[]);
void inftopost(char src[], char tar[]);
int prior(char );
int main()
{
	char inf[100],post[100];
	printf("enter inf\n");
	gets(inf);
	strcpy(post, "");
	inftopost(inf,post);
	printf("postfix\n");
	puts(post);
	return 0;
}

void inftopost(char src[], char tar[])
{
	int i=0,j=0;
	char temp;
	strcpy(tar, "");
	while(src[i]!='\0')
	{
		if(src[i]=='(')
		{
			push(st,src[i]);
			i++;
		}
		if(isalpha(src[i]))
		{
			tar[j]=src[i];
			j++;
			i++;
		}
		if(src[i]=='+' || src[i]=='-' || src[i]=='*' || src[i]=='/' || src[i]=='%')
		{
			while((top!=-1)&&(st[top]!='(')&&(prior(st[top])>prior(src[i])))
			{
				tar[j]=pop(st);
				j++;
			}
			push(st,src[i]);
			i++;
		}
		if(src[i]==')')
		{
			while((top!=-1)&&(st[top]!='('))
			{
				tar[j]=pop(st);
				j++;
			}
			temp=pop(st);
			i++;
		}	
	}
	while((top!=-1)&&(st[top]!='('))
	{
		tar[j]=pop(st);
		j++;
	}
	tar[j]='\0';
}

int prior(char c)
{
	if(c=='*' || c=='/' || c=='%')
	{
		return 1;
	}
	if(c=='+' || c=='-')
	{
		return 0;
	}
}

void push(char st[], char val)
{
	top++;
	st[top]=val;
}

char pop(char st[])
{
	char val=' ';
	val=st[top];
	top--;
	return val;
}

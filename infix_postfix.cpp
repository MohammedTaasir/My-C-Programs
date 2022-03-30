#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
char st[30],inf[30],post[30];
int top=-1;
int pr(char );
void push(char [], char);
char pop(char []);
int main()
{
	char c,temp;
	int i=0,j=0;
	printf("enter infix \n");
	gets(inf);
	printf("infix\tstack\tpostfix\n");
	printf("%c\n",inf[i]);
	getch();
	while(inf[i]!='\0')
	{
		
		c=inf[i];
		if(c=='(')
		{
			push(st,c);
			i++;
		}
		if(isalpha(c))
		{
			post[j]=c;
			j++;
			i++;
		}
		if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%')
		{
			/*if(st[top]=='(')
			{
				push(st,c);
				
			}
			while(pr(st[top])>pr(c))
			{
				post[j]=pop(st);
				j++;
			}
			i++;*/
			while((top!=-1)&&(st[top]!='(')&&(pr(st[top])>=pr(c)))
			{
				post[j]=pop(st);
				j++;
			}
			push(st,c);
			i++;
			
		}
		if(c==')')
		{
			while((st[top]!='(')&&(top!=-1))
			{
				post[j]=pop(st);
				j++;
			}
			temp=pop(st);
			i++;
						/*if((top!=-1)&&(st[top]!='('))
			{
				post[j]=pop(st);
			}
			pop(st);
			i++;*/
		}	
		printf("%c\t%s\t%s\n",inf[i-1],st,post);
			getch();
	}
	while((top!=-1)&&(st[top]!='('))
	{
		post[j]=pop(st);
		j++;
		printf("%c\t%s\t%s\n",inf[i],st,post);
			getch();
	}
	post[j]='\0';
	printf("postfix is\n");
	puts(post);
	return 0;
}

int pr(char c)
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

void push(char s[], char c)
{
	top++;
	s[top]=c;
}

char pop(char s[])
{
	char c;
	c=s[top];
	s[top]=NULL;
	top--;
	return c;
}

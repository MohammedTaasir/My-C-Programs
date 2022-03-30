#include<stdio.h>
#include<string.h>
#include<ctype.h>
float st[30];
int top=-1;
void push(float [], float );
float pop(float []);
int main()
{
	char exp[30],c;
	float op1,op2,val;
	int i=0;
	printf("enter exp\n");
	gets(exp);
	while(exp[i]!='\0')
	{
		c=exp[i];
		if(isdigit(c))
		{
			push(st,(float)(c-'0'));
			i++;
		}
		if(c=='+' || c=='-' || c=='*' || c=='/')
		{
			op2=pop(st);
			op1=pop(st);
			switch(c)
			{
				case '+':
					val=op1+op2;
					break;
					case '-':
						val=op1-op2;
						break;
						case '*':
							val=op1*op2;
							break;
							case '/':
								val=op1/op2;
								break;
				
			}
			push(st,val);
			i++;
		}
	}
	printf("answer is %.2f\n",pop(st));
}

void push(float s[],float val)
{
	top++;
	s[top]=val;
}

float pop(float s[])
{
	float val;
	val=s[top];
	s[top]='\0';
	top--;
	return val;
}

#include<stdio.h>
#include<string.h>
void del(char *,char,int);
int main()
{
	int i,len;
	char *s;
	char n[20];
	s=n;
	char ch;
	printf("enter n\n");
	gets(n);
	len=strlen(n);
	printf("the length of entered text is %d\n",len);
	printf("enter character you dont wanna repeat\n");
	scanf("%d",&ch);
	del(s,ch,len);
}
void del(char *a,char b,int n)
{
	char g[20],d[20];
	char *c;
	a=g;
	c=d;
	int j=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(b!=*(a+i))
		{
			*(c+j)=*(a+i);
			j++;
		}
	}
	*(c+j)=NULL;
	printf("deleted element array\n");
	for(i=0;i<n;i++)
	{
		putchar(*(c+i));
	}
	
}


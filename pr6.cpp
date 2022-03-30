#include<stdio.h>
#include<string.h>
void del(char [],char,int);
int main()
{
	char c[20];
	char ch;
	int n;
	printf("enter string\n");
	gets(c);
	n=strlen(c);
	printf("enter character you wanna delete\n");
	scanf("%c",&ch);
	printf("your text with deleted version is \n");
	del(c,ch,n);
}

void del(char a[],char d,int n)
{
	int i,j=0;
	char temp,b[20];
	for(i=0;i<n;i++)
	{
		if(d!=a[i])
		{
			temp=a[i];
			b[j]=temp;
			j++;
		}
	}
	b[j]=NULL;
	printf("updated string with deletion is \n");
	puts(b);
}

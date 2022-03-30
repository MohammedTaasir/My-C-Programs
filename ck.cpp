#include<stdio.h>
int main()
{
	FILE *p1,*p2;
	printf("enter source file name\n");
	char sf[20];gets(sf);
	printf("enter target file name\n");
	char tf[20];gets(tf);
	printf("enter contents of source file\n");
	char c;
	p1=fopen(sf,"w");
	while((c=getchar())!=EOF)
	{
		putc(c,p1);
	}
	fclose(p1);
	printf("enter character you want to delete\n");
	char a;
	a=getchar();
	p1=fopen(sf,"r");
	p2=fopen(tf,"w");
	while((c=getc(p1))!=EOF)
	{
		if(a!=c)
		{
			putc(c,p2);
		}
	}
	fclose(p2);
	fclose(p1);
	remove(sf);
	rename(tf,sf);
	p1=fopen(sf,"r");
	printf("updated source file contents are\n");
	while((c=getc(p1))!=EOF)
	{
		putchar(c);
	}
	fclose(p1);
	
}

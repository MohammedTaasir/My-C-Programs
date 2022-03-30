#include<stdio.h>
int main()
{
	FILE *p1,*p2;
	p1=fopen("pan","w");
	char c,g;
	printf("enter input to pan\n");
	while((c=getchar())!=EOF)
	{
		putc(c,p1);
	}
	fclose(p1);
	p2=fopen("nap","w");
	p1=fopen("pan","r");
	while((g=getc(p1))!=EOF)
	{
		putc(g,p2);
	}
	fclose(p1);
	fclose(p2);
	printf("your copied file contents of nap is\n");
	p2=fopen("nap","r");
	while((g=getc(p2))!=EOF)
	{
		putchar(g);
	}
	fclose(p2);
}

#include<stdio.h>
int main()
{
	FILE *p1,*p2,*p,*n;char f1[20],f2[20],c;
	printf("enter filename f1\n");
	scanf("%s",f1);
	p1=fopen(f1,"w");
	printf("enter file contents\n");
	while((c=getchar())!=EOF)
	{
		putc(c,p1);
	}
	fclose(p1);
	printf("enter filename f2\n");
	scanf("%s",f2);
	p2=fopen(f2,"w");
	printf("enter file contents\n");
	while((c=getchar())!=EOF)
	{
		putc(c,p2);
	}
	fclose(p2);
	printf("enter filename in which you like to append\n");char fn[20];
	gets(fn);
	printf("enter filename which will be appended in other \n");char fa[20];
	gets(fa);
	p=fopen(fn,"a");
	n=fopen(fa,"r");
	while((c=getc(n))!=EOF)
	{
		putc(c,p);
	}
	fclose(p);
	fclose(n);
	p=fopen(fn,"r");
	printf("your append\n");
	while((c=getc(p))!=EOF)
	{
		putchar(c);
	}
	fclose(p);
	
}

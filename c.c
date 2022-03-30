#include<stdio.h>
int main()
{
	FILE *p;
	char c;
	p=fopen("input","w");
	printf("enter input\n");
	while((c=getchar())!=EOF)
	{
		putc(c,p);                                                    
		
	}
	fclose(p);
	printf("reading from made file\n");
	p=fopen("input","r");
	while((c=getc(p))!=EOF)
	{
		printf("%c",c);
	}
	fclose(p);
}

#include<stdio.h>
int main()
{
	FILE *p;
	long n;
	p=fopen("jt","w");
	char c;
	while((c=getchar())!=EOF)
	{
		putc(c,p);
	}
	
	printf("total number of character in file is %ld\n",ftell(p)-2);
	fclose(p);
	p=fopen("jt","r");
	fseek(p,-3L,2);
	do{
	
		putchar(getc(p));
	}while(!fseek(p,-2L,1));
	fclose(p);
	
}

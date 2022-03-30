#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p,*p1;
	printf("enter filename\n");
	char s[20];
	gets(s);
	printf("enter offset value\n");
	int a;
	scanf("%d",&a);
	p=fopen("tata","w");
	printf("enter file content\n");
	char c;
	while((c=getchar())!=EOF)
	{
		putc(c,p);
	}
	fclose(p);
	p=fopen("tata","r");
	int n;
	p1=fopen("bata","w");
	int k;
	if(a>0)
	{
		if(fseek(p,a+2,1)!=0)
		{
			printf("operation failed\n");
			exit(1);
		}
		while((c=getc(p))!=EOF)
		{
			putchar(c);
		}
		
	}fclose(p);
	p=fopen("tata","r");
	if(a<0)
	{
		fseek(p,a-2,2);
		do{
			c=getc(p);
			putchar(c);
			putc(c,p1);
		}while(feof(p)==0);
	}fclose(p1);
	p1=fopen("bata","r");
/*	printf("here  starts\n");
			fseek(p1,-4L,2);printf("after seek also\n");
			//putchar(getc(p1));
		do{
			
			putchar(getc(p1));
		}while(fseek(p1,-3L,1)==0);*/
		printf("contents of bata\n");
		while((c=getc(p1))!=EOF)
		{
			putchar(c);
		}
		fseek(p1,-4L,2);int j;
		do{
			putchar(getc(p1));
			j=fseek(p1,-2L,1);
			
		}while(j!=-1);

	fclose(p1);
	fclose(p);
}

#include<stdio.h>
int main()
{
	FILE *p1,*p2;
	p1=fopen("tata","w");
	char a,b;int n,k,c,m;
	printf("enter contents of tata\n");
	while((a=getchar())!=EOF)
	{
		putc(a,p1);
	}
	n=ftell(p1);
	fclose(p1);
	p2=fopen("bata","w");
	printf("enter contents of bata\n");
	while((b=getchar())!=EOF)
	{
		putc(b,p2);
	}
	fclose(p2);
	p1=fopen("tata","r");
	p2=fopen("bata","r");
	
	do
	{
		c=1;
		if((a=getc(p1))!=(b=getc(p2)))
		{
			c=0;
			printf("contents dont match\n");
			break;
			
		}
	}while(ftell(p1)<n);
	if(c==1)
	{
		printf("contents matched\n");
		return 0;
	}
	if(c==0)
	{
		return 1;
	}
	fclose(p1);
	fclose(p2);
}

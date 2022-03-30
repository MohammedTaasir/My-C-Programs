#include<stdio.h>
int main()
{
	FILE *p,*p1,*p2;
	int n,i;
	p=fopen("data","w");
	printf("enter input\n");
	for(i=0;i<100;i++)
	{
		scanf("%d",&n);
		if(n==-1)
		{
			break;
		}
		putw(n,p);
	}
	
	fclose(p);
	p=fopen("data","r");
	p1=fopen("even","w");
	p2=fopen("odd","w");
	//printf("even values\n");
	while((n=getw(p))!=EOF)
	{
		if(n%2==0)
		{
			putw(n,p1);
		}
		else
		{
			putw(n,p2);
		}
	}
	fclose(p);
	fclose(p1);
	fclose(p2);
	p1=fopen("even","r");
	printf("even values\n");
	while((n=getw(p1))!=EOF)
	{
		printf("%d ",n);
	}
	putchar('\n');
	fclose(p1);
	p2=fopen("odd","r");
	printf("odd values\n");
	while((n=getw(p2))!=EOF)
	{
		printf("%d ",n);
	}
	fclose(p2);
}

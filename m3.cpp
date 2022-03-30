#include<stdio.h>
#include<string.h>
int main()
{
	char a[80],b;
	int i,ct=0;
	printf("enter string\n");
/*	for(i=0;b!='\n';i++)
	{
		b=getchar();
		a[i]=b;
	}*/
	scanf("%[^\n]s",a);
	//a[i]='\0';
	for(i=0;a[i]!='\0';i++)
	{
		ct++;
		
	}
	printf("totqal no of characters : %d\n",ct);

}

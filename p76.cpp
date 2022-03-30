#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]="WORDPROCESSING";
	char b[20];
	
	int i;
	for(i=4;i<14;i++)
	{
		b[i-4]=a[i];
	}
	b[10]='\0';
	printf("%.4s%11s\n",a,b);
	printf("%.4s\n",a);
	printf("%s\n",b);	
	printf("%.1s\.%.1s\n",a,b);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p1,*p2;
	char *filename;
	p1=fopen("test","w");
	int i,num;
	for(i=10;i<=100;i+=10)
	{
		putw(i,p1);
	}
	fclose(p1);
	printf("enter file name you want to see\n");
	e:
	scanf("%s",filename);
	if((p2=fopen("filename","r"))==NULL)
	{
		printf("no such file exist enter filename again\n");
		goto e;
	}
	
	printf("your file entities\n");
	for(i=0;i<20;i++)
	{
		num=getw(p2);
		if(feof(p2)==0)
		{
			printf("%d ",num);
		}
		else
		{
			printf("end of data\n");
			break;
		}
	}
	
	
	fclose(p2);
	
}

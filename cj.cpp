#include<stdio.h>
int main()
{
	FILE *p1,*p2;
	int s=0;
	printf("enter filename\n");
	char fn[20];
	gets(fn);
	printf("enter integers\n");
	int i,n;
	p1=fopen(fn,"w");
	for(i=0;i<100;i++)
	{
		scanf("%d",&n);
		if(n==-1)
		{
			break;                     //HERE N=-1 WAS NOT ADDED INTO FILE BUT IN 26TH LINE IT IS USED AS CONDITION REMEMBER IN INTEGER FILE FUNCTIONS -1 ACTS THE ROLE OF EOF IN CHAR FILE FUNCTIONS
		}
		putw(n,p1);
	}
	fclose(p1);
	p1=fopen(fn,"r");
	printf("your sum appending...\n");
	do{
		n=getw(p1);
		if(n==-1)                     //THIS IS LINE 26
		{
			break;
		}
		s+=n;
	}while(n!=-1);
	fclose(p1);
	p1=fopen(fn,"a");
	putw(s,p1);
	fclose(p1);
	p1=fopen(fn,"r");
	printf("your appention\n");
	do{
		n=getw(p1);
		printf("%d ",n);
	}while(n!=s);                    //IF S!=S THIS LOOP WILL TERMINATE BECAUSE S WAS APPENDED IN FILE AS S ONLY NOT ANY SPECIFIED INTEGER
	fclose(p1);
	
}

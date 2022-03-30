#include<stdio.h>
int main()
{
	char first[50],mid[50],last[50],full[50];
	int i,j,k;
	printf("enter first\n");
	gets(first);
	printf("enter mid\n");
	gets(mid);
	printf("enter last\n");
	gets(last);
	for(i=0;first[i]!='\0';i++)
	{
		full[i]=first[i];
	}
	full[i]=' ';
	for(j=0;mid[j]!=0;j++)
	{
		full[i+j+1]=mid[j];
	}
	full[i+j+1]=' ';
	for(k=0;last[k]!=0;k++)
	{
		full[i+j+1+1+k]=last[k];
	}
	full[i+j+k+2]='\0';
	printf("your full name is    %s   (by string copy explicit)",full);
	return 0;
}

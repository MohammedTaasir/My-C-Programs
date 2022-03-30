#include<stdio.h>
int main()
{
	char fname[50]="mohammed",sname[50]="taasir",lname[50]="fruitwala",name[100];
	int i,j,k;
	
	for(i=0;fname[i]!=0;i++)
	{
		name[i]=fname[i];
	}
	name[i]=' ';
	for(j=0;sname[j]!=0;j++)
	{
		name[i+j+1]=sname[j];
	}
	name[i+j+1]=' ';
	for(k=0;lname[k]!=0;k++)
	{
		name[i+j+k+2]=lname[k];
	}
	name[i+j+k+2]='\0';
	printf("the full name is \n");
	puts(name);
	
}

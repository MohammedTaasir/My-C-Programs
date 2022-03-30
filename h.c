#include<stdio.h>
void copy(char *,char *);
int main()
{
	char *s1[20],*s2[20];
	printf("enter s1\n");
	gets(*s1);
	printf("as you want copied string using pointers here it is \n");
	copy(*s2,*s1);
	puts(*s2);	
}
void copy(char *s2,char *s1)
{
	while((*s2++=*s1++)!='\0');
}

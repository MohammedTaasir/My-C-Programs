#include<stdio.h>
int main(){
	char a[100];
	int i,vow=0;
	printf("enter your text\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			vow++;
		}
	}
	printf("total number of vowels are = %d",vow);
	
}

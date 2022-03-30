//C PROGRAM TO PRINT STRING IN VARIOUS GIVEN FORMATS
#include<stdio.h>
int main()
{
	char name[20]="WORDPROCESSING",temp[20];
	int i;
	
	for(i=4;i<14;i++)
	{
		temp[i-4]=name[i];
	}
	temp[10]='\0';
	printf("%.4s%11s\n",name,temp);
	printf("%.4s\n",name);
	printf("%s\n",temp);
	return 0;
	
}

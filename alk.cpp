#include<stdio.h>
#include<string.h>
int main()
{
	char a[40],i,j,n,temp;
	printf("enter string\n");
	gets(a);
	n=strlen(a);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("alphabetical string is \n");
	puts(a);
	
}

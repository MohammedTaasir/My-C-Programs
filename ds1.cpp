#include<stdio.h>
int main()
{
	int a[10],i,n;
	printf("enter 10 numbers\n");
	n=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("formatted pattern is \n");
	n=0;
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		n++;
		if(n%3==0){
			printf("\n");
		}
	}
}

#include<stdio.h>
int main()
{
	int a,b,n,i,m;
	printf("enter a\n");
	scanf("%d",&a);
	printf("enter b\n");
	scanf("%d",&b);
	printf("enter n\n");
	scanf("%d",&n);
	i=1;
	while(a%n!=0)
	{
		a=a+1;
		i=i+1;
	}
	
	while(i<=(b/n))
	{
		printf("%d ",i);
		printf("\n");
		m=n*i;
		printf("%d\t",m);
		i++;
	}
	
	
}

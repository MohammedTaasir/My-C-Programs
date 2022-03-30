#include<stdio.h>
int fact(int);
int main()
{
	int i,j,n;
	printf("enter rows u want in pascal triangle\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i-2;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%d ",fact(i)/(fact(j)*fact(i-j)));
		}
		printf("\n");
	}
	
}

int fact(int a)
{
	int f=1;
	int i;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}

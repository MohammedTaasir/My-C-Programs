#include<stdio.h>
long int fac(int n);
int main()
{
	int i,j,n;
	printf("ENTER PASCAL N\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=(n-i-2);j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%ld ",fac(i)/(fac(j)*fac(i-j)));
		}
		printf("\n");
	}
}

long int fac(int n)
{
	int i;
	long int f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}

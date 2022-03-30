#include<stdio.h>
int comp(int *,int *,int );
int main()
{
	int a[30],*x=a;
	int b[30],*y=b;
	int cp;
	int n;
	int i;
	printf("enter length of two array that you will be entering\n");
	scanf("%d",&n);
	printf("enter array-1\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",x+i);
	}
	printf("enter array-2\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",y+i);
	}
	
	printf("1 implies identical and 0 implies non identical\n");
	cp=comp(x,y,n);
	printf("BOTH ARRAYS ARE %d\n",cp);
}

int comp(int *a,int *b,int n)
{
	int i,s[30],c;
	for(i=0;i<n;i++)
	{
		if(*(a+i)==*(b+i))
		{
			s[i]=1;
		}
		else{
			s[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(s[i]!=1)
		{
			c=1;
		}
	}
	if(c==1)
	{
		return 0;
	}
	else{
		return 1;
	}
}

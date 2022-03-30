#include<stdio.h>
void sort(int [],int);
int main()
{
	int a[20],*p,i,key,pos,m,n;
	p=a;
	printf("enter length\n");
	scanf("%d",&n);
	printf("enter array members\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	sort(a,n);
	printf("enter element to be added\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key<a[i])
		{
			pos=i;
			break;
		}
		else if(key>a[n-1])
		{
			pos=n;
			break;
		}
	}
	if(pos!=n)
	{
		m=n-pos+1;
		for(i=0;i<=m;i++)
		{
			a[n-i+2]=a[n-i+1];
		}
	}
	a[pos]=key;
	printf("array with added element is \n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
}
void sort(int a[20],int n)
{
	int i,j,temp;
	printf("sorted array is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

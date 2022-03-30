#include<stdio.h>
void sort(int [],int);
int main()
{
	int a[20],n,i,s;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("sorted array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}	
}

void sort(int a[],int n)
{
	int i,j,temp;
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
}

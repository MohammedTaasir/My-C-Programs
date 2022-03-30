#include<stdio.h>
void sort(int [],int);
int main()
{
	int a[20];
	int i,n,search;
	int first,last,mid;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("enter element to be searched\n");
	scanf("%d",&search);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(a[mid]<search)
		{
			first=mid+1;
		}
		else if(a[mid]==search)
		{
			printf("%d is found at %d position\n",search,mid+1);
			break;
		}
		else{
			last=mid-1;
		}
		mid=(first+last)/2;		
	}
	if(first>last)
	{
		printf("NOT FOUND\n");
	}
	
}
void sort(int a[],int n)
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

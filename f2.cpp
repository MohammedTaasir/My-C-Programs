#include<stdio.h>
int minpos(int [],int);
int main()
{
	int a[20],i,n;
	printf("enter no of array elements\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the minimum no among given array is %d",minpos(a,n));
}

int minpos(int arr[],int d)
{
	int i;
	int min;
	min=arr[0];
	for(i=1;i<d;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}


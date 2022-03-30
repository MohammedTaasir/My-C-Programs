#include<stdio.h>
int main()
{
	int i,j,median,arr[20],n,temp;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	}
	if(n%2==0)
	{
		median=(arr[(n/2)-1]+arr[n/2])/2;
	}
	else{
		median=arr[n/2];
	}
	printf("median is %d",median);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}

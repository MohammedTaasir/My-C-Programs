#include<stdio.h>
int main()
{
	int arr[20],i,j,n,sum=0;
	float avg;
	printf("enter value of n:\n");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("\n");
		sum=sum+arr[i];
	}
	
	avg=(float)sum/n;
	printf("the average of above entered values is %.2f",avg);
	return 0;
}

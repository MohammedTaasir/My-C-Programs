#include<stdio.h>
#include<math.h>
int main()
{
	int i,a[20],n,sum=0,d=0;
	float std,mean;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	mean=sum/n;
	printf("mean is %f\n",mean);
	for(i=0;i<n;i++)
	{
		d=d+pow((a[i]-mean),2);
	}
	std=sqrt(d/n);
	printf("standard deviation is %f\n",std);
	
}

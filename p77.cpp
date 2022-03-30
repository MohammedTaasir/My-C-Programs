#include<stdio.h>
#include<math.h>
float stddev(int [],int);
float mean(int [],int);
int main()
{
	int a[20],n,i;
	float sd;
	printf("enter no of elements\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sd=stddev(a,n);
	printf("standard deviation among given elements is %f\n",sd);
}

float mean(int a[],int n)
{
	int i;
	float sum=0,avg;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	return avg;
}

float stddev(int a[],int n)
{
	float sd;
	int i;
	float d=0;
	float m=mean(a,n);
	for(i=0;i<n;i++)
	{
		d=d+(a[i]-m)*(a[i]-m);
	}
	
	sd=sqrt(d/n);
	return sd;
}

















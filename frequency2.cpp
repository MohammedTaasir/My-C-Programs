#include<stdio.h>
int main()
{
	int a[20],n,i,j,freq[20],c;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		freq[i]=-1;                    //#MAIN LINE.
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				freq[j]=0;             //# FJ = 0 MAIN LINE
			}
		}
		if(freq[i]!=0)                 //# FI MAIN LINE
		{
			freq[i]=c;                 //# FIC MAIN LINE
		}
	}
	for(i=0;i<n;i++)
	{
		if(freq[i]!=0)                 //# FI MAIN LINE
		{
			printf("\nfrequency of %d is %d\n",a[i],freq[i]);
		}
	}
}

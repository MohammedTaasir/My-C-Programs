#include<stdio.h>
int main()
{
	int a[20],n,fr[20],c,i,j;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		fr[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				fr[j]=0;
			}
		}
		if(fr[i]!=0)
		{
			fr[i]=c;
		}
	}
	for(i=0;i<n;i++)
	{
		if(fr[i]!=0)
		{
			printf("%d is having frequency %d\n",a[i],fr[i]);
		}
	}
		
}

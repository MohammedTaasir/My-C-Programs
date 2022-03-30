#include<stdio.h>
int main()
{
	int a[50],meven,modd,i,j;
	printf("enter array size\n");
	scanf("%d",&j);
	printf("enter array elems\n");
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<j;i++)
	{
		if(a[i]%2!=0)
		{
			continue;
		}
		meven=a[i];
		break;
	}
	for(;i<j;i++)
	{
		if(a[i]%2==0&&a[i]>meven)
		{
			meven=a[i];
		}
	}
	for(i=0;i<j;i++)
	{
		if(a[i]%2==0)
		{
			continue;
		}
		modd=a[i];
		break;
	}
	for(;i<j;i++)
	{
		if(a[i]%2!=0&&a[i]>modd)
		{
			modd=a[i];
		}
	}
	printf("the largest even is %d\n",meven);
	printf("the largest odd is %d\n",modd);
}

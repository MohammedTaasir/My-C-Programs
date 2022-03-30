#include<stdio.h>
int main()
{
	int i,j,a[50],n,temp;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array elems\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ascending order is \n");
	for(i=0;i<n-1;i++)
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
		printf("%d\t",a[i]);
	}
}

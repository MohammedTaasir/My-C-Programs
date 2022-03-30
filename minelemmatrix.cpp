#include<stdio.h>
int main()
{
	int min,a[3][3];
	int i,j;
	printf("enter array elems\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	min=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
			}
		}
	}
	printf("the minimum element is %d\n",min);
	
}

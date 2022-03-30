#include<stdio.h>
int main()
{
	int arr[5],i,j,max,min;
	printf("ENTER FIVE NUMBERS:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(i=1;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("MAXIMUM OF ALL NUMBERS IS %d\n",max);
	printf("MINIMUM OF ALL NUMBERS IS %d\n",min);
	return 0;
	
	
	
	
	
	
	
	
}

#include<stdio.h>
int main()
{
	int arr[10],i,even[10],odd[10];
	printf("enter 10 numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
		
			arr[i]=even[i];
		}
		else if(arr[i]%2!=0)
		{
			
			arr[i]=odd[i];
		}
	}
	
	printf("even   odd\n");
	for(i=0;i<10;i++)
	{
		printf("%d   %d\n",even[i],odd[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include<stdio.h>
int main()
{
	int max,val[10],n,i,j,temp;
	printf("enter n\n");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(val[j]<val[j+1])
			{
				temp=val[j+1];
				val[j+1]=val[j];
				val[j]=temp;
			}
			
		}
		
	}
	max=val[0];
	printf("max is %d",max);
	return 0;
	
	
	
	
}

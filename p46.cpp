#include<stdio.h>
#include<math.h>
int main()
{
	float mean,val[10],dev,n=0,sumsqr=0,variance,sum=0,stddev;
	int i;
	printf("enter values press -1 to exit\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",&val[i]);
		if(val[i]==-1)
		{
			break;
		}
		else{
			sum=sum+val[i];
			n+=1;
		}
	}
	mean=sum/n;
	for(i=0;i<n;i++)
	{
		dev=val[i]-mean;
		sumsqr+=dev*dev;
	}
	variance=sumsqr/n;
	stddev=sqrt(variance);
	printf("variance = %f",variance);
	printf("standard deviation = %f",stddev);
	return 0;
	
	
	
	
	
	
	
	
	
	
}

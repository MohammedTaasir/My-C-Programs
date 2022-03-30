#include<stdio.h>
#define max 20
#define counter 10
int main()
{
	float value[max];
	int group[counter]={0,0,0,0,0,0,0,0,0,0},i,high,low;
	printf("Enter twenty values\n");
	for(i=0;i<max;i++)
	{
		scanf("%f",&value[i]);
		++group[(int)value[i]/10];
	}
	
	for(i=0;i<counter;i++)
	{
		low=i*10;
		if(i==10)
		{
			high=100;
		}
		else{
			high=low+9;
		}
		printf("%d  %d to %d  %d\n",i+1,low,high,group[i]);
	}
	return 0;
}

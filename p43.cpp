#include<stdio.h>
int main()
{
	int i,value[10];
	printf("ENTER TEN VALUES\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&value[i]);
	}
	printf("EVEN\tODD\n");
	printf("===========\n");
	for(i=0;i<10;i++)
	{
		if(value[i]%2==0)
	{
		printf("\n%d\t\n",value[i]);
	}
	else{
		printf("\t%d\n",value[i]);
	}
	
	}
	return 0;
}

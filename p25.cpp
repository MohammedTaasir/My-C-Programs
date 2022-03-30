#include<stdio.h>
int main()
{
	int i,ctr=0,ptr=0;
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
			ctr+=1;
		}
		else if(i%3!=0)
		{
			printf("%d ",i);
			ptr+=1;
		}
		else{
			continue;
		}
	}
	printf("\nTHE NUMBERS NOT DIVISIBLE BY 2 ARE : %d\n",ctr);
	printf("THE NUMBERS NOT DIVISIBLE BY 3 ARE : %d\n",ptr);
	return ctr+ptr;
}

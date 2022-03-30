#include<stdio.h>
int main()
{
	float i,j,r;
	float n;
	printf("enter value of n\n");
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			{
				printf("1");
			}
			else{
				r=((i+j-1)/j)*r;
				printf("%f ",r);
			}                                                                                                 
		}
		printf("\n");
	}
}

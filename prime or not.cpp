#include<stdio.h>
int main()
{
	int i=2;
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("the num is not prime");
		}
		else		
		{
			printf("the num is %d is prime",num);
		}
		break;
	}
	if(num==i)
	{
		printf("the num is prime");
	}
	else if(num==1)
	{
		printf("1 is neither prime nor composite");
	}	
return 0;	
}


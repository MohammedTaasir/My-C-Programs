#include<stdio.h>
int main()
{
	int num,temp,sum=0,digit;
	printf("ENTER NUMBER :\n");
	scanf("%d",&num);
	temp=num;
	
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	printf("THE SUM OF DIGIT OF %d IS : %d",temp,sum);
}

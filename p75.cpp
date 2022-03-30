//C PROGRAM TO PRINT SUM OF DIGITS OF ENTERED FOUR DIGIT NUMBER
#include<stdio.h>
int main()
{
	int digit,num,temp,sum=0;
	printf("ENTER FOUR DIGIT NUMBER\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	printf("THE SUM OF DIGITS OF GIVEN NUMBER %d IS %d",temp,sum);
}

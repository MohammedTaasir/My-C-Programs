#include<stdio.h>
int main()
{
	int i,ct;
	for(i=1;i<=500;i++)
	{
		if(i%3==0||i%5==0||i%7==0)
		{
			ct++;
		}
	}
	printf("numbers are = %d\n",ct);
}

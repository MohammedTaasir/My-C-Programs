#include<stdio.h>
double fact(double);
int main()
{
	double i,f;
	
	for(i=1;i<21;i++)
	{
		f=fact(i);
		printf("%.lf! = %.lf\n",i,f);
	}
}
double fact(double n)
{
	double f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}


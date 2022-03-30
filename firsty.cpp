#include<iostream>
using namespace std;

int factorial(int n)
{
	int res=1;
	for (int i=2;i<=n;i++)
	res=res*i;
	return res;
	
}

double sum(int n)
{
	double sum=0;
	for(int i=1;i<=n;i++)
	sum=sum+factorial(i);
	return sum;
	
}

int main()
{
	int n=5;
	cout << sum(n);
	return 0;
}

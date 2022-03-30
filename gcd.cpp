#include<stdio.h>
int main()
{
	int gcd,lcm,product,n1,n2;
	printf("enter n1 and n2\n");
	scanf("%d %d",&n1,&n2);
	product=n1*n2;
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1=n1-n2;
		}
		if(n2>n1)
		{
			n2=n2-n1;
		}
	}
	gcd=n1;
	lcm=product/gcd;
	printf("gcd = %d, lcm = %d",gcd,lcm);
	
}

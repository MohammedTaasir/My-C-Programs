#define loop 100
#define accuracy 0.0001
#include<stdio.h>
int main()
{
	int n;
	float x,term,sum;
	printf("input value of x:");
	scanf("%f",&x);
	sum=0;
	for(term=1,n=1;n<=loop;n++){
		sum=sum+term;
		if(term<=accuracy)
		goto output;
		term=term*x;
	}
	printf("final value of n is not sufficient\n");
	printf("to achieve desired accuracy\n");
	goto end;
	
	output:
		printf("\nexit from loop\n");
		printf("sum=%f;no of terms=%d\n",sum,n);
		end:
			;
}

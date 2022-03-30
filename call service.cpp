#include<stdio.h>
#define SERVICE 250
int main()
{
	float n, Bill, call_charge;
	printf("Enter total number of calls\n");
	scanf("%f\n",&n);
	call_charge=1.25*n/100;
	Bill=SERVICE + call_charge;
	printf("The total charge of the telephone bill is %f\n",Bill);
	return 0;
}

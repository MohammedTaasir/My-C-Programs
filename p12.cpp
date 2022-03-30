#include<stdio.h>
int main()
{
	int m=0;
	do{
		if(m>10)continue;
		
		m=m+10;
		printf("%d",m);
	}while(m<50);
	
	return 0;
}

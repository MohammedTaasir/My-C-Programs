#include<stdio.h>
int main()
{
	int g, a, b, c, max;
	printf("Enter the numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	g=(a>b)?a:b;
	max=(g>c)?g:c;
	printf("Maximum of the three given numbers is %d\n",max);
	return 0;
}

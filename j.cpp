#include<stdio.h>
void space(int);
int main()
{
	int sp;
	printf("enter number of spaces you want\n");
	scanf("%d",&sp);
	space(sp);
}

void space(int n)
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	printf("%d",a);printf("%*d",n+1,b);

}

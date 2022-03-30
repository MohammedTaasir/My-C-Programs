#include<stdio.h>
int main()
{
	int a,i,rev=0,j;
	printf("enter digit\n");
	scanf("%d",&a);
	while(a>0)
	{
		i=a%10;
		rev=rev*10+i;
		a/=10;
	}
	while(rev>0)
	{
		j=rev%10;
		switch(j)
		{
				case 0:
				printf("ZERO ");
				break;
				case 1:
				printf("ONE ");
				break;
				case 2:
				printf("TWO ");
				break;
				case 3:
				printf("THREE ");
				break;
				case 4:
				printf("FOUR ");
				break;
				case 5:
				printf("FIVE ");
				break;
				case 6:
				printf("SIX ");
				break;
				case 7:
				printf("SEVEN ");
				break;
				case 8:
				printf("EIGHT ");
				break;
				case 9:
				printf("NINE ");
				break;
		}
		rev/=10;
	}
}

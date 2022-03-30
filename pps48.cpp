#include<stdio.h>
#include<math.h>
void gotoxy(int,int);
int main()
{
	int x=40,y,i,num;
	printf("enter the n for pyramid\n");
	scanf("%d",&num);
	for(y=0;y<=num;y++)
	{
		gotoxy(x,y+1);
		for(i=-y;i<=y;i++)
		{
			printf("%d",abs(i));
		}
		x=x-3;
	}
}
void gotoxy(int x,int y)
{
	printf("\033[%d;%dH",y,x);
}

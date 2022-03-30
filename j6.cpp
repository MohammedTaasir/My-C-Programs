#include<stdio.h>
void menu();
int read(int);
int calculate(int ,int ,int );
int main()
{
	int ch,a,b;
	printf("WELCOME\n");
	menu();
	read(ch);
	read(a);
	read(b);
	int result=calculate(a,b,ch);
	printf("%d",result);
}
void menu()
{
	printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
}
/*int choice()
{
	int c;
	scanf("%d",&c);
	return c;
}*/
void read(int n)
{
	scanf("%d",&n);
}
int calculate(int a,int b,int ch)
{
	switch(ch)
	{
		case '1':return a+b;
		case '2':return a-b;
		case '3':return a*b;
		case '4':return a/b;
	}
}
/*void display()
{
	printf("%d",calculate());
}*/

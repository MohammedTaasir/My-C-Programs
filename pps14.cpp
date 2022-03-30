#include<stdio.h>
int main()
{
	char a;
	int x,y,add,sub,mul;
	printf("THIS PROGRAM OFFERS ADDITION SUBTRACTION MULTIPLICATION:\nfor add press a\nfor sub press s\nfor mul press m\n");
	scanf("%c",&a);
	
	printf("enter two numbers\n");
	scanf("%d %d",&x,&y);
	switch(a)
	{
		case 'a':
			add=x+y;
			printf("addition is %d\n",add);
			break;
			case 's':
				sub=x-y;
				printf("subtraction is %d\n",sub);
				break;
				case 'm':
					mul=x*y;
					printf("multiplication is %d\n",mul);
					break;
					default:
						printf("program not supportable\n");
						break;
	}

	
}

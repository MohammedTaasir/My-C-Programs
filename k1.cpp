#include<stdio.h>
#include<stdlib.h>
/*struct{
	char name[30];
	struct *next;
};
typedef struct node;*/
int main()
{
	int i,*ip,n;
	ip=(int *)calloc(4,sizeof(int));
	for(i=3;i>=0;i--)
	{
		* ip++ = i * i;
	}
	for(i=3;i>=0;i--)
	{
		printf("%d\n",*--ip);
	}
}

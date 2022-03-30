#include<stdio.h>
int main()
{
struct node{
	int m;
	struct node *next;
}x,y,z,*p;
x.m=10;
y.m=20;
z.m=30;
x.next=&y;
y.next=&z;
z.next=NULL;
p=x.next;
int c=0;
while(p != NULL)
{
	printf("%d\n",p->m);
	p=p->next;
	c++;
}
printf("loop runs %d times\n",c);
}

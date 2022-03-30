#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int number;
	struct list *next;
}node;
int n;
void print(node *);
node *insert(node *,int);
int main()
{
	node *head=NULL;
	printf("input the list of numbers (-1 to end)\n");
	scanf("%d",&n);
	while(n != -1)
	{
		if(head == NULL)
		{
			head=(node *)malloc(sizeof(node));
			head->number=n;
			head->next=NULL;
		}
		else
		{
			head=insert(head,n);
		}
		scanf("%d",&n);
	}
	printf("\n");
	print(head);
	printf("\n");
}
node *insert(node *list,int x)
{
	node *p1,*p2,*p;
	p1=NULL;
	p2=list;
	for(;p2->number<x;p2=p2->next)
	{
		p1=p2;
		if(p2->next == NULL)
		{
			p2=p2->next;
			break;
		}
	}
	p=(node *)malloc(sizeof(node));
	p->number=x;
	p->next=p2;
	if(p1==NULL)
	{
		list=p;
	}
	else
	{
		p1->next=p;
	}
	return (list);
}
void print(node *list)
{
	if(list==NULL)
	{
		printf("NULL");
	}
	else
	{
		printf("%d ",list->number);
		print(list->next);
	}
}


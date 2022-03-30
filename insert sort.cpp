#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int number;
	struct list *next;
}node;
node *insert(node *,int);
void create(node *);
void print(node *);
int main()
{
	node *head,*ins;
	int x;
	head=(node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	printf("insert any item\n");
	scanf("%d",&x);
	ins=insert(head,x);
	print(head);
}
void create(node *p)
{
	printf("enter item name (-1 to end)\n");
	scanf("%d",&p->number);
	if(p->number == -1)
	{
		p->next = NULL;
	}
	else
	{
		p->next=(node *)malloc(sizeof(node));
		create(p->next);	
	} 	
}
void print(node *p)
{
	if(p->next!=NULL)
	{
		//printf("%d ",p->number);
		//exit(1);
	printf("%d ",p->number);
	print(p->next);
    }
}
node *insert(node *head,int x)
{
	node *p,*p1,*p2;
	p1=NULL;
	p2=head;
	for(;p2->number<x;p2=p2->next)
	{
		p1=p2;
		if(p2->next->next==NULL)
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
		head=p;
	}
	else
	{
		p1->next=p;
	}
	return head;
}

#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int number;
	struct list *next;
}node;
void create(node *);
void print(node *);
int main()
{
	node *head;
	head=(node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
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

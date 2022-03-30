#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int number;
	struct list *next;
}node;
void create(node *);
void print(node *);
node *del(node *);
node *find(node *,int);
int main()
{
	node *head,*de;
	head=(node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	de=del(head);
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
node *del(node *head)
{
	int key;
	node *p,*n1;
	printf("enter item to be deleted\n");
	scanf("%d",&key);
	if(head->number == key)
	{
		p=head->next;
		free(head);
		head=p;
	}
	else
	{
		n1=find(head,key);
		if(n1 == NULL)
		{
			printf("key not found\n");
		}
		else
		{
			p=n1->next->next;
			free(n1->next);
			n1->next=p;
			
		}
	}
	return head;
}
node *find(node *head,int key)
{
	if(head->next->number == key)
	{
		return head;
	}
	if(head->next->next == NULL)
	{
		return NULL;
	}
	else
	{
		find(head->next,key);
	}
}

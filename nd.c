#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist{
	int number;
	struct linkedlist *next;
}node;
node *insert(node *);
node *find(node *,int);
void create(node *);
int count(node *);
void print(node *);
int main()
{
	node *head,*ins;
    head=(node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
	printf("total number of nodes in linked list is %d\n",count(head));
	ins=insert(head);
	print(head);printf("\n");
	printf("total number of nodes in linked list is %d\n",count(head));
}
void create(node *p)
{
	printf("enter item:\n(enter -1 to end)\n");
	scanf("%d",&p->number);
	if(p->number == -1)
	{
		p->next = NULL;
	}
	else{
		p->next=(node *)malloc(sizeof(node));
		create(p->next);
	}
}
int count(node *p)
{
	if(p->number==-1)
	{
		return 0;	
	}
	else return (1+count(p->next));
}
void print(node *p)
{
	if(p->next != NULL)
	{
		printf("%d\t",p->number);
	
		if(p->next->next == NULL)
		{
			printf("%d\t",p->next->number);
		}
		print(p->next);
	}	
}
node *insert(node *head)
{
	node *n1,*new;
	int x,key;
	printf("enter item name to be inserted\n");
	scanf("%d",&x);
	printf("enter key\n");
	scanf("%d",&key);
	if(key == head->number)
	{
		new = (node *)malloc(sizeof(node));
		new->number=x;
		new->next=head;
		head=new;
	}
	else{
		n1=find(head,key);
		if(n1 == NULL)
		{
			printf("key not found\n");
		}
		else{
			new=(node *)malloc(sizeof(node));
			new->number=x;
			new->next=n1->next;
			n1->next=new;	
		}
	}
	return head;
}
node *find(node *head,int key)
{
	if(head->next->number == key)
	{
		return head;//it implies that head is n1;
	}
	else if(head->next->next == NULL)
	{
		return NULL;
	}
	else
	{
		find(head->next,key);
	}
}

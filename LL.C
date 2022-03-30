#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};
struct node* start=NULL;
struct node* create(struct node*);
struct node* insfr(struct node*);
struct node* insend(struct node*);
struct node* insasc(struct node*);
struct node* delfr(struct node*);
struct node* delbef(struct node*);
struct node* delaf(struct node*);
void display();
int main()
{
int op;
do{

 printf("\n***MENU***\n1.create ll\n2.insert front\n3.insert end\n4.insert in ascending ll\n5.delete front\n6.delete before node\n7.delete after\n8.display\n9.exit\n");
 printf("enter option\n");
 scanf("%d",&op);
 switch(op)
 {
  case 1:start=create(start);
  display();
  break;
  case 2:start=insfr(start);
  display();
  break;
  case 3:start=insend(start);
  display();
  break;
  case 4:start=insasc(start);
  display();
  break;
  case 5:start=delfr(start);
  display();
  break;
  case 6:start=delbef(start);
  display();
  break;
  case 7:start=delaf(start);
  display();
  break;
  case 8:display();
  break;
 }
 }while(op!=9);
 
}

struct node *create(struct node *start)
{
 int val;
 struct node *newnode, *ptr;
// newnode=(struct node*)malloc(sizeof(struct node));
// newnode->data=val;
 printf("enter data -1 to end\n");
 scanf("%d",&val);
 while(val!=-1)
 {
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=val;
  if(start==NULL)
  {
   newnode->next=NULL;
   start=newnode;
  }
  else{
   ptr=start;
   while(ptr->next!=NULL)
   {
    ptr=ptr->next;
   }
   ptr->next=newnode;
   newnode->next=NULL;
  }
  printf("enter data\n");
  scanf("%d",&val);
 }
 return start;
}

struct node *insfr(struct node *start)
{
 struct node *newnode, *ptr;
 int val;
 printf("enter val to insert\n");
 scanf("%d",&val);
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=val;
 newnode->next=start;
 start=newnode;
 return start;
}

void display()
{
 struct node *ptr;
 ptr=start;
 while(ptr!=NULL)
 {
  printf("%d  ",ptr->data);
  ptr=ptr->next;
 }
}

struct node *insend(struct node *start)
{
 struct node *ptr, *newnode;
 int val;
 printf("enter val to be added\n");
 scanf("%d",&val);
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=val;
 ptr=start;
 while(ptr->next!=NULL)
 {
  ptr=ptr->next;
 }
 ptr->next=newnode;
 newnode->next=NULL;
 return start;
}

struct node *insasc(struct node *start)
{
	struct node *newnode, *ptr, *preptr;
	int val,t=0;
	printf("enter data\n");
	scanf("%d",&val);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	preptr=ptr=start;
	if(val < start->data)
	{
		newnode->next=start;
		start=newnode;
	}
	while(val > ptr->data)
	{
		preptr=ptr;
		ptr=ptr->next;
		t=1;
		if(ptr==NULL)
		{
			t=2;
			break;
		}
	}
	if(t==1)
	{
		preptr->next=newnode;
		newnode->next=ptr;
	}
	if(t==2)
	{
		preptr->next=newnode;
		newnode->next=NULL;
	}
 return start;
}

struct node *delbef(struct node *start)
{
 int val;
 struct node *newnode, *ptr, *preptr, *prepreptr;
 printf("enter node before\n");
 scanf("%d",&val);
// newnode=(struct node*)malloc(sizeof(struct node));
// newnode->data=val;
prepreptr=preptr=ptr=start;
 while(ptr->data!=val)
 {
  prepreptr=preptr;
  preptr=ptr;
  ptr=ptr->next;
 }
prepreptr->next=ptr;
free (preptr);

 return start;
}

struct node *delfr(struct node *start)
{
 struct node *ptr;
 ptr=start;
 start=start->next;
 free (ptr);
 return start;
}

struct node *delaf(struct node *start)
{
 struct node *ptr,*preptr;
 int val;
 printf("enter data after\n");
 scanf("%d",&val);
 ptr=start;
 while(preptr->data!=val)
 {
  preptr=ptr;
  ptr=ptr->next;
 }
 preptr->next=ptr->next;
 free (ptr);
 return start;
}

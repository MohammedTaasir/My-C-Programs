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
struct node* insbef(struct node*);
struct node* insaf(struct node*);
struct node* delfr(struct node*);
struct node* delbef(struct node*);
struct node* delaf(struct node*);
struct node* delend(struct node*);
struct node* display(struct node*);
int main()
{
int op;
do{

 printf("\n***MENU***\n1.create ll\n2.insert front\n3.insert end\n4.insert in ascending ll\n5.insert before\n6.insert after\n7.delete front\n8.delete before node\n9.delete after\n10.delete end\n11.display\n12.exit\n");
 printf("enter option\n");
 scanf("%d",&op);
 switch(op)
 {
  case 1:start=create(start);
  start=display(start);
  break;
  case 2:start=insfr(start);
  start=display(start);
  break;
  case 3:start=insend(start);
  start=display(start);
  break;
  case 4:start=insasc(start);
  start=display(start);
  break;
  case 5:start=insbef(start);
  start=display(start);
  break;
  case 6:start=insaf(start);
  start=display(start);
  break;
  case 7:start=delfr(start);
  start=display(start);
  break;
  case 8:start=delbef(start);
  start=display(start);
  break;
  case 9:start=delaf(start);
  start=display(start);
  break;
  case 10:start=delend(start);
  start=display(start);
  break;
  case 11:start=display(start);
  break;
 }
 }while(op!=12);
 
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

struct node* display(struct node* start)
{
 struct node *ptr;
 ptr=start;
 while(ptr!=NULL)
 {
  printf("%d  ",ptr->data);
  ptr=ptr->next;
 }
 return start;
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

struct node* insaf(struct node* start)
{
 struct node *ptr,*preptr,*newnode;
 int val,num;
 printf("enter insert value\n");
 scanf("%d",&num);
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=num;
 printf("enter data after\n");
 scanf("%d",&val);
 preptr=ptr=start;
 while(preptr->data!=val)
 {
  preptr=ptr;
  ptr=ptr->next;
 }
 preptr->next=newnode;
 newnode->next=ptr;
 return start;
}

struct node* insbef(struct node* start)
{
 struct node *ptr,*preptr,*newnode;
 int val,num;
 printf("enter insert value\n");
 scanf("%d",&num);
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=num;
 printf("enter data before\n");
 scanf("%d",&val);
 preptr=ptr=start;
 while(ptr->data!=val)
 {
  preptr=ptr;
  ptr=ptr->next;
 }
 preptr->next=newnode;
 newnode->next=ptr;
 return start;
}

struct node* delend(struct node*)
{
	struct node *ptr,*preptr;
	preptr=ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free (ptr);
	return start;
}

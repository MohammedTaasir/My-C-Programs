#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int q[50];
int f=-1;
int r=-1;
void order(int );
int payment(int );
int display();
int count(int []);
int main()
{
	int op,cid,i;
	do{
	printf("\n1.ORDER\n2.PAYMENT\n3.DISPLAY\n4.EXIT\n");
	printf("enter choice\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("ENTER CUSTOMER ID\n");
			scanf("%d",&cid);
			order(cid);
			break;
			case 2:
			if(f!=-1)
			{
				printf("PAYMENT OF CUSTOMER %d DONE SUCESSFULLY\n",payment(i));
			}
			else{
				printf("NO MORE CUSTMERS\n");
			}
				break;
				case 3:
				if(f!=-1)
				{
					printf("TRANSACTION OF CUSTOMER %d IS IN PROCESS\n",display());
				}
				else{
					printf("NO MORE CUSTOMERS\n");
				}
					break;
	}
}while(op!=4);
	
}
void order(int cno)
{
	
	if(cno>5)
	{
		printf("STOCK IS OUT NO MORE ORDERS CAN'T BE TAKEN\n");
		return;
	}
	if(f==-1&&r==-1)
	{
		f=0;
		r=0;
	}
	else{
		r++;
	}
	q[r]=cno;
}
int payment(int cno)
{
	
	if(f==-1)
	{
		printf("NO MORE CUSTOMERS\n");
		return 0;
	}
	cno=q[f];
	if((f==0&&r==0)||(f==r))
	{
		f=-1;
		r=-1;
	}
	else{
		f++;
	}
	return cno;
}
int display()
{
	int i;
	if(f==-1)
	{
		printf("NO MORE CUSTOMERS\n");
		return 0;
	}
	else{
		printf("\nORDER OF CUSTOMERS IS\n");
		for(i=f;i<=r;i++)
		{
			printf("CUSTOMER %d\n",i+1);
		}
		return q[f];
	}
	
}


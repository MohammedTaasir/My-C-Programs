#include<stdio.h>
#include<conio.h>
#define max 5
int r=-1,f=-1;
int q[max];
void ins(int [], int);
int del(int []);
void disp(int []);
int main()
{
	int op, v, val;
	do{
		printf("\n****menu****\n");
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("4.exit\n");
		printf("enter option\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("enter val to insert\n");
				scanf("%d",&val);
				ins(q,val);
				disp(q);
				break;
				case 2:
					v=del(q);
					if(v!=-1)
					{
						printf("%d deleted\n",v);
					}
					else{
						printf("underflow\n");
					}
					disp(q);
					break;
					case 3:
						disp(q);
						break;
		}
	}while(op!=4);
}

void ins(int q[], int val)
{
	if(r==max-1)
	{
		printf("overflow\n");
		return;
	}
	else if(f==-1)
	{
		f=r=0;
	}
	else{
		r++;
	}
	q[r]=val;
}

int del(int q[])
{
	int val;
	if(f==-1)
	{
		printf("underflow\n");
		val=-1;
	}
	else if(f==0 && r==0)
	{
		val=q[f];
		f=-1;
		r=-1;
	}
	else{
		val=q[f];
		f++;
	}
	return val;
}

void disp(int q[])
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("%d  ",q[i]);
	}
}

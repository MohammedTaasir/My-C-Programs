#include<stdio.h>
#include<conio.h>
#define max 5
int r=-1,f=-1;
int cq[max];
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
				ins(cq,val);
				disp(cq);
				break;
				case 2:
					v=del(cq);
					if(v!=-1)
					{
						printf("%d deleted\n",v);
					}
					else{
						printf("underflow\n");
					}
					disp(cq);
					break;
					case 3:
						disp(cq);
						break;
		}
	}while(op!=4);
}

void ins(int q[], int val)
{
	if((r==max-1 && f==0)||(f==r+1))
	{
		printf("overflow\n");
		return;
	}
	else if(f==-1)
	{
		f=r=0;
	}
	else if(r==max-1 && f!=0)
	{
		r=0;
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
	else if(f==r)
	{
		val=q[f];
		f=-1;
		r=-1;
	}
	else if(f==max-1)
	{
		val=q[f];
		f=0;
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
	if(f<=r)
	{
	for(i=f;i<=r;i++)
	{
		printf("%d  ",q[i]);
	}
	}
	else{
		for(i=f;i<max;i++)
		{
			printf("%d  ",q[i]);
		}
		for(i=0;i<=r;i++)
		{
			printf("%d  ",q[i]);
		}
	}
}

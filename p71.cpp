//C PROGRAM TO ROTATE VALUES
#include<stdio.h>
int main()
{
	int x=5,y=10,z=15,temp;
	printf("DEFAULT VALUES\n%d\n%d\n%d\n",x,y,z);
	temp=y;
	y=x;
	x=z;
	z=temp;
	printf("ROTATED VALUES\n%d\n%d\n%d\n",x,y,z);
	return temp;
}

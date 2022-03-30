#include<stdio.h>
int main()
{
	int i,roll[20];
	float marks[20],value[20];
	printf("enter roll and marks of 20 students\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&roll[i]);
		scanf("%f",&value[i]);
		
	}
	printf("\n");
	printf("ROLL NO.\t   MARKS\n");
	for(i=0;i<10;i++)
	{
	
	printf("%d\t%f",roll[i],value[i]);
	printf("\n");
    }
    return 0;
}

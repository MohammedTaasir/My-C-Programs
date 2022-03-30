#include<stdio.h>
int main()
{
	int i,age,ctr=0;
	for(i=1;i<=10;i++)
	{
		printf("ENTER AGE:\n");
		scanf("%d",&age);
		
		if(age>=50&&age<=60)
		{
			ctr=ctr+1;
		}
		else
		{
			continue;
		}
	}
	printf("THE PERSONS FALLING IN THE AGE GROUP OF 50-60 IS %d",ctr);
	return 0;
}

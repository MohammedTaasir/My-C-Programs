#include<stdio.h>
int main()
{
	int g[3][5][2];            //here three boxes indicate 3 sem     5 student      2 subjects 
	                          // inshort three 2D arrays where each 2D array shows entry of marks in 2 subjects of 5 students
	int i,j,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("enter marks of subject %d of student %d in sem %d\n",k+1,j+1,i+1);
				scanf("%d",&g[i][j][k]);
			}
		}
	}
	int to=0;
	for(j=0;j<5;j++)
	{
		for(i=0;i<2;i++)
		{
			for(k=0;k<2;k++)                                                            //here k comes after k++
			{
				to+=g[i][j][k];
			}
			printf("student %d has %d marks in %d subject in %d sem\n",j+1,to,k,i+1);   //only due to k++ at my pointer  
			to=0;
		}
	}
}

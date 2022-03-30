#include<stdio.h>
int main()
{
	char *filename;
	FILE *f1,*f2;
	int i,num;
	f1=fopen("test","w");
	for(i=10;i<=100;i+=10)
	{
		putw(i,f1);
	}
	fclose(f1);
	printf("input filename\n");
	of:
		scanf("%s",filename);
		if((f2=fopen("filename","r")) == NULL)
		{
			printf("type filename again\n");
			goto of;
		}
		else
		{
			for(i=1;i<=20;i++)
			{
				num=getw(f2);
				if(feof(f2))
				{
					printf("end of data\n");
					break;
				}
				else
				{
					printf("%d\n",num);
				}
			}
		}
		fclose(f2);
}

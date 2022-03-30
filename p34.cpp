#include<stdio.h>
int main()
{
	int car;
	char city;
	int i,j,frequency[5][5]={{0},{0},{0},{0},{0}};
	printf("Enter city and code one after another\n");
	printf("Enter x to exit the further acception\n");
	for(i=1;i<100;i++)
	{
		scanf("%c",&city);
		if(city=='x')
		break;
		scanf("%d",&car);
		switch(city)
		{
			case 'b':
				frequency[1][car]++;
				break;
				case 'c':
					frequency[2][car]++;
					break;
					case 'd':
						frequency[3][car]++;
						break;
						case 'm':
							frequency[4][car]++;
							break;
			
		}
    }
   		printf("CITY\t AMBASSADOR\t FIAT\t DOLPHIN\t MARUTI\n");
		printf("------------------------------------\n");
		for(i=1;i<5;i++)
		{
			switch(i)
			{
				case 1:
					printf("BOMBAY\t\t");
					break;
					case 2:
						printf("CALCUTTA\t");
						break;
						case 3:
							printf("DELHI\t\t");
							break;
							case 4:
								printf("MADRAS\t\t");
								break;
			}
			for(j=1;j<5;j++)
			{
				printf("%d\t",frequency[i][j]);
			}
			printf("\n");
		}
	return 0;
}

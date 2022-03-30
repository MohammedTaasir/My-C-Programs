#include<stdio.h>
#include<windows.h>
int main()
{
	int a[30],i,n;
	printf("WELCOME SIR/MADAM, WITHOUT YOUR OPINION THERE IS NO SCOPE OF DECISION, BUT YOUR PRESENCE FELT US PROUD\n");
	Sleep(5000);
	system("cls");
	printf("WE ARE HERE TO ELECT FAVOURITE FACULTY AMONGST ALL WHO MENTORED US TO THEIR BEST \n\n");
	printf("PLEASE PARTICIPATE SINCERELY BECAUSE YOUR OPINION COUNTS!!!!!\n");
	printf("NOTE. While giving vote you will see name of representives with their respected numbers PLEASE PRESS RESPECTED NUMBERS BEFORE THEIR NAME TO GIVE VOTE !!\n");
	printf("\nLIST OF REPRESENTIVES\n\n");
	printf("1. MUKUND PANDYA (BME)\n");
	printf("2. PRANAV CONTRACTOR (BEE)\n");
	printf("3. AVANI VASANT (PPS)\n");
	printf("4. RAJVI DESAI (ENGLISH + SKILL)\n");
	printf("5. BHUMIKA PATEL (MATHS)\n");
	printf("6. ASHISH PRAJAPATI (PPS LAB)\n");
	printf("7. RONAK SONI (BME LAB)\n");
	printf("8. AJAY UPADHYAY (MATHS LAB)\n");
	printf("9. PUNIT RATHOD (BEE LAB)\n");
	printf("10. NIKITA CHAKRABORTY (SKILL)\n");
	printf("\nENTER TOTAL NUMBER OF VOTERS\n\n");
	scanf("%d",&n);
	int freq[30];
	for(i=0;i<n;i++)
	{
		system("cls");
			printf("\nLIST OF REPRESENTATIVES\n\n");
	printf("1. MUKUND PANDYA (BME)\n");
	printf("2. PRANAV CONTRACTOR (BEE)\n");
	printf("3. AVANI VASANT (PPS)\n");
	printf("4. RAJVI DESAI (ENGLISH + SKILL)\n");
	printf("5. BHUMIKA PATEL (MATHS)\n");
	printf("6. ASHISH PRAJAPATI (PPS LAB)\n");
	printf("7. RONAK SONI (BME LAB)\n");
	printf("8. AJAY UPADHYAY (MATHS LAB)\n");
	printf("9. PUNIT RATHOD (BEE LAB)\n");
	printf("10. NIKITA CHAKRABORTY (SKILL)\n");

		printf("\nPLEASE ENTER YOUR VOTE YOUR VOTER ID IS #VFW%d\n",i+1);
		scanf("%d",&a[i]);
		freq[i]=-1;
	//	system("cls");
	}
	//int freq[30];
	int j,count;
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				freq[j]=0;
				count++;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	for(i=0;i<n;i++)
	{
	//	printf("%d %d\n",a[i],freq[i]);
	}//int w;
/*	int max=freq[0];
	for(i=1;i<n;i++)
	{
		if(freq[i]>max)
		{
			max=freq[i];
		}			
	}*/int win[20],frc[20],k=0,d=0;
	for(i=0;i<n;i++)
	{
		if(freq[i]!=0)
		{
		//	printf("%d %d\n",a[i],freq[i]);
		win[k++]=a[i];
		frc[d++]=freq[i];
			
		}
	}
	for(i=0;i<k;i++)
	{
		//printf("\t%d-%d\n",win[i],frc[i]);
		
	}
	int wind;
	int maxi=frc[0];
	wind=win[0];
	for(i=1;i<d;i++)
	{
		if(frc[i]>maxi)
		{
			maxi=frc[i];wind=win[i];
		}
	}
	//printf("max is %d and winning vote number is %d\n",maxi,wind);
	system("cls");
	printf("CALCULATING VOTING RESULT Please wait for 10 seconds..........\n");
	
	Sleep(10000);
	system("cls");
	switch(wind)
	{
		case 1:printf("\n\nMUKUND PANDYA WINS\n\n");break;
		case 2:printf("\n\nPRANAV CONTRACTOR WINS\n\n");break;
		case 3:printf("\n\nAVANI VASANT WINS\n\n");break;
		case 4:printf("\n\nRAJVI DESAI WINS\n\n");break;
		case 5:printf("\n\nBHUMIKA PATEL WINS\n\n");break;
		case 6:printf("\n\nASHISH PRAJAPATI WINS\n\n");break;
		case 7:printf("\n\nRONAK SONI WINS\n\n");break;
		case 8:printf("\n\nAJAY UPADHYAY WINS\n\n");break;
		case 9:printf("\n\nPUNIT RATHOD WINS\n\n");break;
		case 10:printf("\n\nNIKITA CHAKRABORTY WINS\n\n");break;
	}
	
//	printf("MAX IS %d WINNER IS %d\n",max,w);*/	
}

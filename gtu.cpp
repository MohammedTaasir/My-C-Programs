#include<stdio.h>
int main()
{
char cAddress[30]="Gtu Examination";
int iX=67584;
float fZ=95.7658;
printf("%.6s\n",cAddress);
printf("%7s\n",cAddress);
printf("%010d\n",iX);
printf("%10d\n",-iX);
printf("%*.*f\n",7,2,fZ);
printf("%e\n",fZ);
printf("%12.4e\n",-fZ);
}

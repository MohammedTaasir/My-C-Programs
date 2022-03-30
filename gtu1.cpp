#include<stdio.h>
#include<string.h>
int main()
{
int iNo[4] = {10,20,30,40};
char cName[] = "exam";
char cMidd[]= "university";
strcpy(cName,cMidd);
printf("%d",iNo[0]);
printf ("%s",cName);
}

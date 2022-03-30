#include<stdio.h>
int main()
{
	char a;
	
	printf("enter char\n");
	o:
	scanf("%c",&a);
	
	
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
	{
		printf("vowel\n");
	}
	else{
		printf("consonant\n");
	}
	if(a!='0')
	goto o;
	return 0;
}

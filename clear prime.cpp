/*in this program when i is equal to n in first iteration, main execution starts where if in second
for loop if any value of j
in the interval of i/2 which is ultimately n/2 satisfies (n or) i % j where j<=i/2 (ad dha interval ma of i)
then j loop execution stops further means no iteration takes place like if i=9 and i/2=4 if j=3<4 satisfies
i%j=0 then i/2=4 which is j=4(j<=i/2) does not take place means no j++ and the value of isPrime is 
saved permanently 2
because confusion is created that 4 which is j=4 satisfies i%j != 0 then the value of isPrime should 
remain 1 and ultimately the number nine(examples of this kind of worst cases are the multiple of three)
 which is not prime will become prime so as to solve this confusion 
is the intention of writing this long passage*/


/*and in the second loop test condition which is j<=i/2 is present to take special care of number 2 because 
if this condition is not present number 2 will be considered as not a prime number instead of being prime 
number so this passage is written */
#include<stdio.h>
int main()
{
	int i,j,n,isPrime;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		isPrime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isPrime=2;
			    		
			}
		}
	}
	if(isPrime==1)
	{
		printf("the number is prime number");
	}
	else if(isPrime==2)
	{
		printf("the number is not prime number");
	}
	return 0;
}

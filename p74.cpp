#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	printf("ENTER FLOATING LITERAL\n");
	scanf("%f",&a);
	printf("%.f\t%.3f\t  %.f",ceil(a),a,floor(a));
}

struct date input(struct date t)
{
	long int n;
	printf("enter your input in yyyymmdd format\n");
	scanf("%ld",&n);
	t.y=n/10000;
	n=n%10000;
	t.m=n/100;
	n=n%100;
	t.d=n;
	printf("%d - %d - %d\n",t.d,t.m,t.y);
	return t;
}

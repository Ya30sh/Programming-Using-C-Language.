#include<stdio.h>
int main()
{
	int n,h,d,g;
	printf("enter the basic salary ");
	scanf("%d",&n);
	if (n>=30000)
	{
		h=n*0.3;
		d=n*0.95;
	}
	else if (n>=20000)
	{
		h=n*0.25;
		d=n*0.9;
	}
	else if (n>=10000)
	{
		h=n*0.2;
		d=n*0.8;
	}
		g=h+d+n;
		printf("gross salary is %d",g);
	return 0;
}

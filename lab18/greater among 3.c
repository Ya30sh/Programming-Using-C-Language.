#include<stdio.h>
int main()
{
	float a,b,c;
	float *p,*q,*r;
	printf("Enter the value of A: ");
	scanf("%f",&a);
	printf("Enter the value of B: ");
	scanf("%f",&b);
	printf("Enter the value of C: ");
	scanf("%f",&c);
	p=&a;
	q=&b;
	r=&c;
	if(a>b && a>c)
	{
		printf("%f is greater",*p);
	}
	else if(b>a && b>c)
	{
		printf("%f is greater",*q);
	}
	else if(c>a && c>b)
	{
		printf("%f is greater",*r);
	}
}

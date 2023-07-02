#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,r,s;
	printf("ax^2+bx+c=0 ");
    printf("\nvalue of a ");
    scanf("%d",&a);
    printf("value of b ");
    scanf("%d",&b);
    printf("value of c ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if (d>0)
    {
     r=(-b+(sqrt(d)))/2*a;
     s=(-b-(sqrt(d)))/2*a;
     printf("Root1 is %f and Root2 is %f",r,s);
	}
	else if (d==0)
	{
		r=(-b)/(2*a);
		s=(-b)/(2*a);
		printf("Root1 is %f and Root2 is %f",r,s);
	}
	else if (d<0)
	{
		d=d*(-1);
		r=(-b+(sqrt(d)))/2*a;
     	s=(-b-(sqrt(d)))/2*a;
     	a=2*a;
     	printf("Root1 is -%d+%fi/%d and Root2is -%d-%fi/%d",b,d,a,b,d,a);
	}
	return 0;
}

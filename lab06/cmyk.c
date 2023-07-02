#include<stdio.h>
int main()
{
	double r,g,b,o,p,q,t,c,m,y,k;
	printf("enter the value of RED between 0-255 ");
	scanf("%lf",&r);
	printf("enter the value of GREEN between 0-255 ");
	scanf("%lf",&g);
	printf("enter the value of BLUE between 0-255 ");
	scanf("%lf",&b);
	o=r/255;
	p=g/255;
	q=b/255;
	t=o+p+q;
	if(t==0)
	{
		printf("\nCYAN(C)=0%");
		printf("\nMAGENTA(M)=0%");
		printf("\nYELLOW(Y)=0%");
		printf("\nBLACK(K)=100%");
	}
	else if (t==3)
	{
		printf("\nCYAN(C)=0%");
		printf("\nMAGENTA(M)=0%");
		printf("\nYELLOW(Y)=0%");
		printf("\nBLACK(K)=0%");
		printf("\nWHITE=100%");
	}
	else
	{
		k=1-t;
		c=(1-o);
		m=(1-p);
		y=(1-q);
		printf("\nCYAN(C)=%lf%",c);
		printf("\nMAGENTA(M)=%lf%",m);
		printf("\nYELLOW(Y)=%lf%",y);
		printf("\nBLACK(K)=%lf%",k);
	}
	return 0;
}

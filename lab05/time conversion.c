#include<stdio.h>
int main()
{
	int n,h,a,m,s;
	printf("enter the value ");
	scanf("%d",&n);
	h=n/3600; //3660/3600=1hr
	a=n%3600; //60
	m=a/60; //60/60=
	s=a%60; //60%60=0
	printf("%d Hours %d Minutes %d Second",h,m,s);
	return 0;
	
}

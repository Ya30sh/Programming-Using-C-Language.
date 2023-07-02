#include<stdio.h>
int main()
{
	int n,y,a,w,d;
	printf("enter the value ");
	scanf("%d",&n);
	y=n/365; 
	a=n%365; 
	w=a/7; 
	d=a%7; 
	printf("%d years %d week %d day",y,w,d);
	return 0;	
}

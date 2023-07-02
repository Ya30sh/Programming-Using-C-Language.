#include<stdio.h>
int main()
{
	int p,r,t,SI;
	printf("enter the amount: ");
	scanf("%d",&p);
	printf("enter the rate of interest : ");
	scanf("%d",&r);
	printf("enter the time period: ");
	scanf("%d",&t);	
	SI=(p*r*t)/100;
	printf("the simple interest is: %d",SI);
	return 0;
}
